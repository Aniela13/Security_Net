#include <util/atomic.h>
#include "PinChangeInterrupt.h"
#include <math.h>
#include "I2Cdev.h"
#include "Wire.h"
//#include <SoftwareSerial.h>

// PARA LEER DE LA ESP32
String inputData = "";
bool nuevas_coordenadas=false;

class SimplePID{
  /* 
  This class computes the control signal for velocity control of a 
  DC motor with a PID controller base on controller gains, a setpoint and 
  the actual velocity value.
  Params:
    - kp: Proportional gain.
    - kd: Derivative gain.
    - ki: Integral gain.
    - umax: Maximun control value.
    - eprec: Previous error in the control loop.
    - umax: Integral cumulative error.
    - vmin: Minimun velocity in rpm.
  */
  private:
    float kp, kd, ki, umax, vmin; // Parameters
    float eprev, eintegral; // Cumulative variables

  public:
  // Constructor
  SimplePID() : kp(1), kd(0), ki(0), umax(255), eprev(0.0), eintegral(0.0), vmin(15.0){}
  // A function to set the parameters
  void setParams(float kpIn, float kdIn, float kiIn, float umaxIn, float vminIn){
    kp = kpIn; kd = kdIn; ki = kiIn; umax = umaxIn; vmin = vminIn;
  }
  // A function to compute the control signal
  void evalu(int value, int target, float deltaT, int &pwr){
    // Error
    float e = (target - value)*((float) fabs(target) > vmin);
    // Derivative
    float dedt = (e - eprev)/(deltaT)*((float) fabs(target) > vmin);
    // Integral
    eintegral = (eintegral + e * deltaT)*((float) fabs(target) > vmin);
    if (umax/ki<eintegral){
      eintegral = umax/ki;
    }
    if (-umax/ki>eintegral){
      eintegral = -umax/ki;
    }
    // Control signal
    float u = kp * e + kd * dedt + ki * eintegral;
    pwr = (int) fabs(u);
    // Truncate signal
    if (pwr > umax) {
      pwr = umax;
    }
    if (pwr < 0) {
      pwr = 0;
    }
    eprev = e;
  }
};

/***************************   VARIABLES   ***************************/

// Number of motors
#define NMOTORS 4
// Pins
const int enc[] = {4, 5, 8, 13};
const int DIR[] = {2, 7, 9, 12};
const int pwm[] = {3, 6, 10, 11};

// Globals
int posPrev[] = {0, 0, 0, 0};
float vel[]   = {0.0, 0.0, 0.0, 0.0};
float vt[]    = {0.0, 0.0, 0.0, 0.0};
float vfil[]  = {0.0, 0.0, 0.0, 0.0};
int dir[]     = {0, 0, 0, 0};
long prevT    = 0;
// PPR of each motor
const double ppr[] = {1390, 1390, 1390, 1390}; 
// const double ppr[] = {780, 780, 780, 780}; 
// Robot dimentions
const double a_b = 0.2025, R = 0.04;
const double l_a_b = 1/0.2025;

// Pose variables
double x = 0, y = 0, theta = 0;
double xPrev = 0, yPrev = 0, thetaPrev = 0; 

// PID class instances
SimplePID pid[NMOTORS];

// Dynamic variables
float velAng[]     = {0, 0, 0, 0};
int velEnc[]       = {0, 0, 0, 0};
int velEncSlack[]  = {0, 0, 0, 0};
float sampleT      = 0.1;
// Target variables for control
double vx = 0, vy = 0, vw = 0;

// Case variable
//int seq = -1; //en espera de instrucciones
// Time periods of sequences
double T1 = 1.0, T2 = 1.0, T3 = 1.0;
// Initial and elapsed time of a sequence
double t0 = 0.0, t1 = 0.0;
// Velocity limits
double vminLim = 15.0;
// Velocities signs
int sgn[]     = {1, 1, 1, 1};
int sgnPrev[] = {1, 1, 1, 1};


unsigned long lastReadTime = 0;
unsigned long tiempo_prev = 0;

int seq = -1;
float xGoal = 1;
float yGoal = -0.5;

// Estructura para coordenadas
struct Coordenadas {
  float lat;
  float lon;
};

Coordenadas coordenadas;

// Búfer temporal para los datos recibidos por I2C
uint8_t receivedData[sizeof(Coordenadas)];
volatile bool newData = false;
int receivedBytes = 0;
/*****************************   SETUP   *****************************/

void setup() {
  // Begin communication
  Serial.begin(9600);
  
  // Iniciar I2C como esclavo (con el ESP32)
  Wire.begin(0x08);
  Wire.onRequest(requestEvent);
  Wire.onReceive(receiveEvent);

  // Setup I/O pins
  for(int k = 0; k < NMOTORS; k++){
    pinMode(enc[k], INPUT);
    pinMode(pwm[k], OUTPUT);
    pinMode(DIR[k], OUTPUT);
  }
  // PID gains for each motor
  pid[0].setParams(0.5, 0.02, 3.0, 255, vminLim);
  pid[1].setParams(0.5, 0.02, 3.0, 255, vminLim);
  pid[2].setParams(0.5, 0.02, 3.0, 255, vminLim);
  pid[3].setParams(0.5, 0.02, 3.0, 255, vminLim);
  // Activate interrupts
  attachPinChangeInterrupt(digitalPinToPinChangeInterrupt(enc[0]), readEncoder<0>, CHANGE);
  attachPinChangeInterrupt(digitalPinToPinChangeInterrupt(enc[1]), readEncoder<1>, CHANGE);
  attachPinChangeInterrupt(digitalPinToPinChangeInterrupt(enc[2]), readEncoder<2>, CHANGE);
  attachPinChangeInterrupt(digitalPinToPinChangeInterrupt(enc[3]), readEncoder<3>, CHANGE);
  delay(2000);
  prevT = micros();
  tiempo_prev = millis();

}

/*****************************   LOOP   ******************************/

void loop() {
  // Si está esperando datos y los recibe, empieza secuencia
  if (seq == -1 && nuevas_coordenadas) {
    nuevas_coordenadas = false;
    seq = 0;
    Serial.println("Iniciando movimiento hacia objetivo...");
  }

  // Tiempo actual y deltaT
  long currT = micros();
  float deltaT = ((float)(currT - prevT)) / 1.0e6;
  t1 = ((float)(currT)) / 1.0e6;

  // Leer codificadores y actualizar velocidades cada sampleT
  if (sampleT <= deltaT) {
    prevT = currT;

    noInterrupts();
    for (int k = 0; k < NMOTORS; k++) {
      velEncSlack[k] = velEnc[k];
      velEnc[k] = 0;
    }
    interrupts();

    for (int k = 0; k < NMOTORS; k++) {
      vel[k] = velEncSlack[k] / deltaT / ppr[k] * 60.0;
      velAng[k] = sgn[k] * vel[k] * PI / 30;
    }

    BilinearEstimation(deltaT);

    if (seq == 0) {
      // Movimiento hacia el punto objetivo (solo encoders)
      Serial.println("Inicio Movimiento");
      CalculatePositionError(xGoal, yGoal, vx, vy, vw);
    } else if (seq == -1) {
      // Detener motores
      CalculateVelAng(0, 0, 0);
      StopMotors();
    }

    CalculateVelAng(vx, vy, vw);

    for (int k = 0; k < NMOTORS; k++) {
      int pwr;
      pid[k].evalu(vel[k], vt[k], deltaT, pwr);
      setMotor(dir[k], pwr, pwm[k], DIR[k]);
    }
  }

  // Verificación si llegó al punto objetivo
  if (seq == 0 && fabs(xGoal - x) < 0.05 && fabs(yGoal - y) < 0.05) {
    Serial.println("Mov terminado");
    seq = -1;  // Ir a espera
  }

}

/******************************************************************************************************************************/
/************************************************   FUNCTIONS   ***************************************************************/
/******************************************************************************************************************************/

void CalculatePositionError(double xGoal_l, double yGoal_l, double &vx, double &vy, double &vw){
    // Error en posición
    double errorX = xGoal_l - x;
    double errorY = yGoal_l - y;
    
    //Probar valores de K y usar el que dé un buen resultado 
    //kp_pos es la constante proporcional al error de la posición
    double kp_pos= 1.3;

    // Calcular la velocidad global en función del error y la constante k en cada eje
    double vx_global = errorX * kp_pos;
    double vy_global = errorY * kp_pos;

    double ct = cos(theta);
    double st = sin(theta);

    // No hay rotación
    vw = 0;

    // Calcular la velocidad relativa para el robot: vx y vy
    vx = ct * vx_global + st * vy_global ;
    vy = - st * vx_global + ct * vy_global ;

}

void BilinearEstimation(double deltaT){
    /* 
    Método bilineal para estimar la posición del robot.
    - Considera la rotación durante el movimiento.
    - Reduce el error acumulativo en trayectorias curvas.
    */
    
    // Promedio del ángulo anterior y actual
    double theta_avg = thetaPrev + (theta - thetaPrev) / 2.0;

    // Pre-calculo de seno y coseno para eficiencia
    double ct = cos(theta_avg);
    double st = sin(theta_avg);

    // Estimación de posición basada en velocidades de cada rueda
    double vx_robot = (R/4) * ((ct + st) * velAng[0] + (ct - st) * velAng[1] + 
                                (ct - st) * velAng[2] + (ct + st) * velAng[3]);
    double vy_robot = (R/4) * ((st - ct) * velAng[0] + (st + ct) * velAng[1] + 
                                (st + ct) * velAng[2] + (st - ct) * velAng[3]);

    // Actualizar la pose usando integración bilineal
    x = xPrev + vx_robot * deltaT;
    y = yPrev + vy_robot * deltaT;
    thetaPrev = theta; // Guardar ángulo previo para la siguiente iteración

    // Guardar valores actuales como previos para el siguiente ciclo
    xPrev = x;
    yPrev = y;
}

void CalculateVelAng(double vx, double vy, double vw) { 
  /* 
  Function that computes the velocity in rpm and the direction 
  of each wheel from the absolute velocity.

  Inputs:
    - vx: Linear velocity in X axis, in m/s.
    - vy: Linear velocity in Y axis, in m/s.
    - vw: Angular velocity in Z axis, in rad/s.
  */
  double w[] = {0, 0, 0, 0};
  // Angular velocity of each motor in rad/s
  w[0] = (vx - vy - vw * a_b) / R;
  w[1] = (vx + vy + vw * a_b) / R;
  w[2] = (vx + vy - vw * a_b) / R;
  w[3] = (vx - vy + vw * a_b) / R;
  for (int i = 0; i < NMOTORS; i++) {
    sgnPrev[i] = sgn[i];
    sgn[i] = w[i] / fabs(w[i]); 
    // Update motor direction
    dir[i] = (1 + sgn[i]) / 2;
    // Calculate desired angular velocity in rpm
    vt[i] = fabs(w[i]*30/PI);
  }
}

void setMotor(int dir, int pwmVal, int pwmch, int dirch) {
  /* 
  Function to setup pins to control motors.

  Inputs:
    - dir: Motor direction (1 or 0).
    - pwmVal: PWM control to pin.
    - pwmch: PWM pin channel.
    - dirch: Direction pin channel.
  */
  analogWrite(pwmch, pwmVal);
  if(dirch==12 || dirch==7){
    if (dir == 1) {
      digitalWrite(dirch, LOW);
    } else if (dir == 0) {
      digitalWrite(dirch, HIGH);
    } else {
      digitalWrite(dirch, LOW);
    }
  }
  else{
    if (dir == 1) {
      digitalWrite(dirch, HIGH);
    } else if (dir == 0) {
      digitalWrite(dirch, LOW);
    } else {
      digitalWrite(dirch, HIGH);
    }
  }
}


template <int j>
void readEncoder() {
  /* 
  Function that counts each rising edge of a encoder
  */
  velEnc[j]++;
}


void StopMotors(){
  /* 
  Function that stops each DC motor. 
  */
  CalculateVelAng(0,0,0);
  for(int k = 0; k < NMOTORS; k++){
    setMotor(dir[k], 0.0, pwm[k], DIR[k]);
  }
  CalculateVelAng(0,0,0);
  delay(6000);
}

void receiveEvent(int numBytes) {
  Serial.println("Datos recibidos");
  if (numBytes < 8) return; // No se puede leer ni X ni Y completos

  int32_t xRaw = 0;
  int32_t yRaw = 0;

  Wire.readBytes((char*)&xRaw, 4);
  Wire.readBytes((char*)&yRaw, 4);

  xGoal = xRaw / 10000.0;
  yGoal = yRaw / 10000.0;

  // Actualizar estado
  //seq = 0; // Reiniciar la secuencia: ir al punto (x,y), luego orientar si corresponde
  nuevas_coordenadas = true; // habilita movimiento
  xPrev = x;
  yPrev = y;
}

void requestEvent() {
  Serial.println("Datos solicitados");
  Wire.write("datos"); // enviar datos al maestro
}





#include <util/atomic.h>
#include "PinChangeInterrupt.h"
#include <math.h>
#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"
//#include <SoftwareSerial.h>

// PARA LEER DE LA ESP32
String inputData = "";
bool orientacion_recibida = false;
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

//IMU
MPU6050 sensor;
int gx, gy, gz;
long tiempo_prev, dt;

unsigned long readInterval = 100; // intervalo en milisegundos para leer el IMU (ajusta el valor a lo que necesites)
unsigned long lastReadTime = 0;
int seq = 0;
float xGoal = 1;
float yGoal = -0.5;
float thetaGoal = PI/2;
double errorTheta = PI;
float directionGoal = 2*PI;
// Estructura para coordenadas
struct Coordenadas {
  float lat;
  float lon;
  float theta;
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

  // // Inicializar IMU
  // sensor.initialize();
  // if (sensor.testConnection()) {
  //   Serial.println("IMU iniciado correctamente");
  // } else {
  //   Serial.println("Error al iniciar el IMU");
  // }

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
  if (newData) {
    newData = false;

    if (receivedBytes == sizeof(receivedData)) {
      memcpy(&coordenadas, receivedData, sizeof(coordenadas));
      Serial.print("Latitud: ");
      Serial.println(coordenadas.lat, 6);
      Serial.print("Longitud: ");
      Serial.println(coordenadas.lon, 6);
      Serial.print("Orientacion: ");
      Serial.println(coordenadas.theta, 6);

      seq = 1;
    } else {
      Serial.println("Error: tamaño de datos no coincide");
    }
  }
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
    if (orientacion_recibida) {
      seq = 1;  // Cambiar a fase de orientación
    } else {
      seq = -1;  // Ir a espera
    }
  }

  // Fase de orientación (con lectura de IMU)
  /*else if (seq == 1) {
    unsigned long currentTime = millis();

    // Leer IMU cada cierto intervalo
    if (currentTime - lastReadTime >= readInterval) {
      lastReadTime = currentTime;

      // Cambiar a maestro, leer giroscopio eje Z
      gz = sensor.getRotationZ(); // asegurarte de que 'sensor' esté bien inicializado como MPU6050

      dt = currentTime - tiempo_prev;
      tiempo_prev = currentTime;

      float gz_rad_s = gz * (250.0 / 32768.0) * PI / 180.0;
      theta = theta + gz_rad_s * (dt / 1000.0);

      // Normalizar ángulo entre -π y π
      if (theta >= PI) theta -= 2 * PI;
      else if (theta <= -PI) theta += 2 * PI;

      Serial.print("θ: ");
      Serial.println(theta, 4);
    }

    // Control PID para orientación
    CalculateOrientationError(thetaGoal, vx, vy, vw, errorTheta);
    CalculateVelAng(vx, vy, vw);

    for (int k = 0; k < NMOTORS; k++) {
      int pwr;
      pid[k].evalu(vel[k], vt[k], dt / 1000.0, pwr);
      setMotor(dir[k], pwr, pwm[k], DIR[k]);
    }

    // Comprobar si ya está bien orientado
    if (fabs(errorTheta) < 0.05) {
      CalculateVelAng(0, 0, 0);
      StopMotors();
      orientacion_recibida = false;
      seq = -1;  // Parado hasta recibir nuevas coordenadas
    }
  }*/
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

void CalculateOrientationError(double thetaGoal_l, double &vx, double &vy, double &vw, double &errorTheta){
    // Error de orientación
    errorTheta = thetaGoal_l - theta;

    //No modificar el condicional
    if (errorTheta >= PI){
      errorTheta -= 2*PI;
    }
    else if (errorTheta <= -PI){
      errorTheta += 2*PI;
    }

    //Colocar el valor a vx y vy, de manera que solo haya rotación
    vx = 0;
    vy = 0;

    // Calcular la velocidad angular en función del error y la constante kp_ang
    //kp_ang es la constante proporcional al error del ángulo

    double kp_ang = 1.7;
    vw = errorTheta * kp_ang;

    // Lógica en caso vw sea mayor a PI/5
    if (fabs(vw) > PI/5){
        vw = (vw/fabs(vw))*PI/5;
    }
    // Lógica en caso errorTheta sea menor a 0.4, que genera velocidades muy pequeñas, asignar un valor alto de velocidad angular con el símbolo correspondiente
    if (fabs(errorTheta)<0.4){
        vw = (errorTheta/fabs(errorTheta))*PI/5.3;
    }

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
/* Ya no se usa serial, sino I2C por la falta de pines ;-;
void parseIncomingData(String data) {
  //Funcion para leer datos por serial
  int xIndex = data.indexOf("X:");
  int yIndex = data.indexOf("Y:");
  int tIndex = data.indexOf("T:");

  if (xIndex == -1 || yIndex == -1) {
    Serial.println("Error: Formato incorrecto");
    return;
  }

  String xVal = data.substring(xIndex + 2, yIndex);
  xVal.trim();

  String yVal;
  if (tIndex == -1) {
    yVal = data.substring(yIndex + 2);
  } else {
    yVal = data.substring(yIndex + 2, tIndex);
  }
  yVal.trim();

  String tVal = "";
  if (tIndex != -1) {
    tVal = data.substring(tIndex + 2);
    tVal.trim();
  }

  xGoal = xVal.toFloat();
  yGoal = yVal.toFloat();
  
  if (tVal != "") {
    thetaGoal = tVal.toFloat();
    orientacion_recibida = true;  // Se recibió orientación
    seq = 0; // Activar: ir a (x,y) y luego orientar
  } else {
    orientacion_recibida = false; // No se recibió orientación
    seq = 0; // Solo ir a (x,y)
  }

  Serial.println("Nuevas coordenadas recibidas:");
  Serial.print("X: "); Serial.println(xGoal);
  Serial.print("Y: "); Serial.println(yGoal);
  if (tVal != "") {
    Serial.print("θ: "); Serial.println(thetaGoal);
  }
  //actualizar variables 
  xPrev = x;
  yPrev = y;
  thetaPrev = theta;
  errorTheta = PI;
}*/

void receiveEvent(int numBytes) {
  Serial.println("Datos recibidos");
  if (numBytes < 8) return; // No se puede leer ni X ni Y completos

  int32_t xRaw = 0;
  int32_t yRaw = 0;
  int32_t tRaw = 0;

  Wire.readBytes((char*)&xRaw, 4);
  Wire.readBytes((char*)&yRaw, 4);

  xGoal = xRaw / 10000.0;
  yGoal = yRaw / 10000.0;

  // Verificamos si también se recibió theta
  if (numBytes >= 12) {
    Wire.readBytes((char*)&tRaw, 4);
    thetaGoal = tRaw / 10000.0;
    orientacion_recibida = true;
  } else {
    orientacion_recibida = false;
  }

  // Actualizar estado
  seq = 0; // Reiniciar la secuencia: ir al punto (x,y), luego orientar si corresponde
  nuevas_coordenadas = true; // habilita movimiento
  // Serial.println("Nuevas coordenadas recibidas por I2C:");
  // Serial.print("X: "); Serial.println(xGoal);
  // Serial.print("Y: "); Serial.println(yGoal);
  // if (orientacion_recibida) {
  //   Serial.print("θ: "); Serial.println(thetaGoal);
  // }

  // Guardar posición previa
  xPrev = x;
  yPrev = y;
  thetaPrev = theta;
  errorTheta = PI;
}
/*
void receiveEvent(int numBytes) {
  if (numBytes == sizeof(receivedData)) {
    for (int i = 0; i < numBytes; i++) {
      receivedData[i] = Wire.read();
    }
    receivedBytes = numBytes;
    newData = true;
  } else {
    // Aun así, lee los datos para liberar el bus
    while (Wire.available()) Wire.read();
  }
}*/

void requestEvent() {
  Serial.println("Datos solicitados");
  Wire.write("datos"); // enviar datos al maestro
}





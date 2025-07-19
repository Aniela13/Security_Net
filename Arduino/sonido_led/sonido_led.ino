const int sound_sensor = A0 ;
const int pinLED_R = 13;
const int pinLED_G = 12;
const int pinLED_B = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Inicializar la comunicación UART a 9600 baudios
  pinMode(pinLED_R, OUTPUT);  
  pinMode(pinLED_G, OUTPUT);  
  pinMode(pinLED_B, OUTPUT);  
  pinMode(sound_sensor, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  double Lectura =analogRead(A0); 
  Serial.println(Lectura);
  if(Lectura>700){
    digitalWrite(pinLED_R, 200);
    digitalWrite(pinLED_G, 0);
    digitalWrite(pinLED_B, 0);
    delay(200) ;
  }
  else if(Lectura<700 && Lectura>300){
    digitalWrite(pinLED_B, 200);
    digitalWrite(pinLED_R, 0);
    digitalWrite(pinLED_G, 0) ;
    delay(200) ;
  }
  else if(Lectura<300){
    digitalWrite(pinLED_G, 200);
    digitalWrite(pinLED_B, 0);
    digitalWrite(pinLED_R, 0);
    delay(200) ;
  }
}

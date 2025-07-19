// #include <Wire.h>
// #include <MPU6050.h>

// MPU6050 imu;

// volatile int16_t gz = 0;
// volatile bool lecturaPendiente = false;

// void setup() {
//   Serial.begin(9600);

//   // Inicializar como esclavo
//   Wire.begin(0x08); 
//   Wire.onRequest(requestEvent);

//   // Inicializar el MPU6050 en modo maestro temporal
//   Wire.begin();
//   imu.initialize();
//   if (imu.testConnection()) {
//     Serial.println("IMU conectada correctamente");
//   } else {
//     Serial.println("Error al conectar con IMU");
//   }
//   Wire.end();

//   // Volver a esclavo
//   Wire.begin(0x08);
//   Wire.onRequest(requestEvent);
// }

// void loop() {
//   if (lecturaPendiente) {
//     // Cambiar a modo maestro para leer IMU
//     Wire.end();
//     Wire.begin(); 

//     imu.getRotation(NULL, NULL, &gz); // Solo Gz

//     Wire.end();

//     // Volver a esclavo
//     Wire.begin(0x08);
//     Wire.onRequest(requestEvent);

//     lecturaPendiente = false;
//   }
// }

// void requestEvent() {
//   lecturaPendiente = true;

//   // Espera breve para asegurar lectura (opcionalmente usar flag externo)
//   delay(10);

//   Wire.write((uint8_t *)&gz, 2); // Enviar 2 bytes del entero gz
// }
//////Codigo para verificar su=i le esta mandando datos correctamente

#include <Wire.h>

void setup() {
  Wire.begin(0x08);  // Dirección del esclavo
  Wire.onRequest(requestEvent);  // Función que se llama cuando ESP32-CAM pide datos
}

void loop() {
  // Nada aquí
}

void requestEvent() {
  int16_t gz = 1234;  // Valor simulado, reemplaza por lectura real del IMU
  Wire.write((byte *)&gz, 2);  // Enviar los 2 bytes (LSB + MSB)
}
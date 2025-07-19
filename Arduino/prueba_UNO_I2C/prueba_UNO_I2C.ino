#include <Wire.h>
#include <MPU6050.h>

MPU6050 sensor;

int16_t gzValue = 0; // Último valor leído del giroscopio eje Z
unsigned long lastReadTime = 0;
const unsigned long readInterval = 100; // ms

void setup() {
  Serial.begin(9600);

  // Iniciar I2C como esclavo (con el ESP32)
  Wire.begin(0x08);
  Wire.onRequest(requestEvent);

  // Inicializar IMU
  sensor.initialize();
  if (sensor.testConnection()) {
    Serial.println("IMU iniciado correctamente");
  } else {
    Serial.println("Error al iniciar el IMU");
  }
}

void loop() {
  // Leer el IMU cada cierto tiempo (sin bloquear)
  unsigned long currentTime = millis();
  if (currentTime - lastReadTime >= readInterval) {
    lastReadTime = currentTime;

    // Leer giroscopio eje Z
    gzValue = sensor.getRotationZ();
    // Opcional para depuración:
    Serial.print("gz actualizado: ");
    Serial.println(gzValue);
  }

  // Aquí puedes agregar lógica extra si quieres, mientras sea no bloqueante
}

// Se llama automáticamente cuando el ESP32 hace un requestFrom
void requestEvent() {
  // Enviar el gz como 2 bytes (little endian)
  Wire.write((uint8_t*)&gzValue, 2);
}

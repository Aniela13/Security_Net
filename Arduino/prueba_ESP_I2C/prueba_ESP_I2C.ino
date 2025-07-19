#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin(2, 14); // SDA = GPIO2, SCL = GPIO14
  delay(1000);
}

void loop() {
  Wire.requestFrom(0x08, 2); // Pedimos 2 bytes al Arduino

  if (Wire.available() >= 2) {
    int16_t gz = Wire.read() | (Wire.read() << 8);
    Serial.print("gz desde Arduino: ");
    Serial.println(gz);
  } else {
    Serial.println("No se recibió respuesta del Arduino");
  }

  delay(1000);
}

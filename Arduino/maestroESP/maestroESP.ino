#include <Wire.h>

#define SLAVE_ADDR 0x08

float xGoal = 0.0;
float yGoal = 0.0;

void setup() {
  Serial.begin(115200);
  Wire.begin(2, 14); // SDA = GPIO2, SCL = GPIO14
  Wire.setClock(100000); // Reduce frecuencia para evitar errores
  Serial.println("Ingrese coordenadas X Y [Theta opcional], separadas por espacios:");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();
    if (input.length() == 0) return;

    // Parsear entrada, formato esperado: "X Y" (se ignora Theta)
    int firstSpace = input.indexOf(' ');
    if (firstSpace == -1) {
      Serial.println("Formato inválido. Ejemplo: 1.23 4.56");
      return;
    }

    String xStr = input.substring(0, firstSpace);
    String yStr = input.substring(firstSpace + 1);

    xGoal = xStr.toFloat();
    yGoal = yStr.toFloat();

    Serial.print("Enviando a Arduino: X=");
    Serial.print(xGoal, 4);
    Serial.print(" Y=");
    Serial.print(yGoal, 4);
    Serial.println();

    // Convertir a enteros para I2C (x10000)
    int32_t xInt = (int32_t)(-xGoal * 10000);
    int32_t yInt = (int32_t)(-yGoal * 10000);

    // Enviar por I2C como 8 bytes
    Wire.beginTransmission(SLAVE_ADDR);
    Wire.write((uint8_t *)&xInt, sizeof(xInt));
    Wire.write((uint8_t *)&yInt, sizeof(yInt));
    byte error = Wire.endTransmission();

    if (error == 0) {
      Serial.println("✅ Datos enviados por I2C al Arduino");
    } else {
      Serial.print("❌ Error al enviar por I2C. Código: ");
      Serial.println(error);
    }
  }
}

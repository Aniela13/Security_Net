#include <TinyGPSPlus.h>
#include <HardwareSerial.h>
TinyGPSPlus gps;

// Cofigura el SoftwareSerial: evita usar (0,1) en Arduino Uno, porque son RX/TX hardware
HardwareSerial gpsSerial(1);
// Pines GPS
#define GPS_RX 16
#define GPS_TX -1// no se usa, amenos que quiera controlar el gps por comandos


// Variable para recordar si ya obtuvo fix por primera vez
bool fix_obtenido = false;

void setup() {
  Serial.begin(115200);
  gpsSerial.begin(9600, SERIAL_8N1, GPS_RX, GPS_TX);//cada segundo el gps envia datos
  
  Serial.println("Esperando señal GPS...");
}

void loop() {
 unsigned long start = millis();
  while (millis() - start < 1000) {
    while (gpsSerial.available() > 0) {
      gps.encode(gpsSerial.read());
    }
  }

  if (gps.location.isValid()) {
    if (!fix_obtenido) {
      Serial.println("¡Fix GPS obtenido! Satélites conectados.");
      // Fix me indica cuantos datos reales tengo: lon alt y lat, debe ser mayor a 1 para indicar que 
      //el gps esta obteniendo correctamente los datos de los satelites
      fix_obtenido = true;
    }

    Serial.print("Latitud: ");
    Serial.println(gps.location.lat(), 6);

    Serial.print("Longitud: ");
    Serial.println(gps.location.lng(), 6);

    Serial.print("Satélites: ");
    Serial.println(gps.satellites.value());

    Serial.print("Altitud: ");
    Serial.println(gps.altitude.meters());

    delay(2000);
  } else {
    Serial.println("Buscando señal GPS...");
    delay(2000);
  }
  // while (gpsSerial.available()) {
  //   char c = gpsSerial.read();
  //   Serial.write(c); // Esto imprime directamente las sentencias NMEA
  // }
}

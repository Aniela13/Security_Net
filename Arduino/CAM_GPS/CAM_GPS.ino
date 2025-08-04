#include <TinyGPSPlus.h>
#include <HardwareSerial.h>
#include <WiFi.h>
#include <WebServer.h>
#include "esp_camera.h"
#include <Wire.h>
#define CAMERA_MODEL_AI_THINKER // Has PSRAM
#include "camera_pins.h"
#include <ArduinoJson.h> // recomendable para JSON si no lo usas aún

// const char *ssid = "Sheldon";
// const char *password = "Sheldon&2019";
const char* ssid = "redpucp";
const char* password = "C9AA28BA93";
//void startCameraServer();
void setupLedFlash(int pin);

TinyGPSPlus gps;// Libreria para decodificar los datos de los modulos GPS(envia datos en formato NMEA)
bool fix_obtenido = false;
unsigned long lastGPSMsg = 0;
HardwareSerial gpsSerial(1);
// Pines GPS
#define GPS_RX 16
#define GPS_TX -1// no se usa, amenos que quiera controlar el gps por comandos

#define SLAVE_ADDR 0x08//Maestro del arduino
float xGoal = 0.0;
float yGoal = 0.0;

WebServer server(80);

void setup() {
  Serial.begin(115200);
 
  // Inicializa UART1 para GPS
  gpsSerial.begin(9600, SERIAL_8N1, GPS_RX, GPS_TX);//cada segundo el gps envia datos
  //I2C ARDUINO
  Wire.begin(2, 14); // SDA = GPIO2, SCL = GPIO14
  Wire.setClock(100000); // Reduce frecuencia para evitar errores
  //Asignacion de pines por sofwre, para que estos pines se comuniquen por UART
  Serial.setDebugOutput(true);
  Serial.println();
  camera_config_t config;
  config.ledc_channel = LEDC_CHANNEL_0;
  config.ledc_timer = LEDC_TIMER_0;
  config.pin_d0 = Y2_GPIO_NUM;
  config.pin_d1 = Y3_GPIO_NUM;
  config.pin_d2 = Y4_GPIO_NUM;
  config.pin_d3 = Y5_GPIO_NUM;
  config.pin_d4 = Y6_GPIO_NUM;
  config.pin_d5 = Y7_GPIO_NUM;
  config.pin_d6 = Y8_GPIO_NUM;
  config.pin_d7 = Y9_GPIO_NUM;
  config.pin_xclk = XCLK_GPIO_NUM;
  config.pin_pclk = PCLK_GPIO_NUM;
  config.pin_vsync = VSYNC_GPIO_NUM;
  config.pin_href = HREF_GPIO_NUM;
  config.pin_sccb_sda = SIOD_GPIO_NUM;
  config.pin_sccb_scl = SIOC_GPIO_NUM;
  config.pin_pwdn = PWDN_GPIO_NUM;
  config.pin_reset = RESET_GPIO_NUM;
  config.xclk_freq_hz = 20000000;
  config.frame_size = FRAMESIZE_UXGA;
  config.pixel_format = PIXFORMAT_JPEG;  // for streaming
  //config.pixel_format = PIXFORMAT_RGB565; // for face detection/recognition
  config.grab_mode = CAMERA_GRAB_WHEN_EMPTY;
  config.fb_location = CAMERA_FB_IN_PSRAM;
  config.jpeg_quality = 12;
  config.fb_count = 1;

  /// config 
  if (config.pixel_format == PIXFORMAT_JPEG) { // verifica que sea jpeg
    if (psramFound()) { // si encuentra memoria externa del esp32, mejora la calidad de la imagen
      config.jpeg_quality = 10;
      config.fb_count = 2;
      config.grab_mode = CAMERA_GRAB_LATEST;
    } else {
      config.frame_size = FRAMESIZE_SVGA;
      config.fb_location = CAMERA_FB_IN_DRAM;
    }
  } else { // si no es jpeg usa la resolucioon mas baja
    config.frame_size = FRAMESIZE_240X240;
#if CONFIG_IDF_TARGET_ESP32S3
  config.fb_count = 2;
#endif
  }
#if defined(CAMERA_MODEL_ESP_EYE)
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
#endif

  // camera init
  esp_err_t err = esp_camera_init(&config);
  if (err != ESP_OK) {
    Serial.printf("Camera init failed with error 0x%x", err);
    return;
  }

  sensor_t *s = esp_camera_sensor_get();
  // initial sensors are flipped vertically and colors are a bit saturated
  if (s->id.PID == OV3660_PID) {
    s->set_vflip(s, 1);        // flip it back
    s->set_brightness(s, 1);   // up the brightness just a bit
    s->set_saturation(s, -2);  // lower the saturation
  }
  // drop down frame size for higher initial frame rate
  if (config.pixel_format == PIXFORMAT_JPEG) {//reduce la resolucion inicial de la camara para que arranque rapido
  s->set_framesize(s, FRAMESIZE_QVGA);
  }

#if defined(CAMERA_MODEL_M5STACK_WIDE) || defined(CAMERA_MODEL_M5STACK_ESP32CAM)
  s->set_vflip(s, 1);
  s->set_hmirror(s, 1);
#endif

#if defined(CAMERA_MODEL_ESP32S3_EYE)
  s->set_vflip(s, 1);
#endif

// Setup LED FLash if LED pin is defined in camera_pins.h
#if defined(LED_GPIO_NUM)
  setupLedFlash(LED_GPIO_NUM);
#endif

  WiFi.begin(ssid, password);
  WiFi.setSleep(false);

  Serial.print("WiFi connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  //startCameraServer(&server);

  Serial.print("Camera Ready! Use 'http://");
  Serial.print(WiFi.localIP());
  Serial.println("' to connect");

  //Endpoint gps
  server.on("/gps", HTTP_GET, []() {
    if (gps.location.isValid()) {
      String json = "{";
      json += "\"lat\": " + String(gps.location.lat(), 6) + ",";
      json += "\"lon\": " + String(gps.location.lng(), 6);
      json += "}";
      server.send(200, "application/json", json);
    } else {
      server.send(200, "application/json", "{\"error\": \"GPS no válido\"}");
    }
  });

  //Endpoint camera
  server.on("/capture", HTTP_GET, []() {

    camera_fb_t * fb = esp_camera_fb_get();
    if (!fb) {
      Serial.println("Fallo al capturar imagen");
      server.send(500, "text/plain", "Camera capture failed");
      return;
    }

    WiFiClient client = server.client();
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: image/jpeg");
    client.print("Content-Length: ");
    client.println(fb->len);
    client.println(); // Línea en blanco para indicar fin de cabeceras

    client.write(fb->buf, fb->len); // Enviar el cuerpo de la imagen

    esp_camera_fb_return(fb);
  });
  // POST actualizar coords objetivo (antes GET, mejor POST para envío datos)
   // Endpoint para recibir coordenadas desde el cliente
  server.on("/setcoords", HTTP_POST, []() {
    if (!server.hasArg("plain")) {
      server.send(400, "text/plain", "Faltan datos");
      return;
    }

    StaticJsonDocument<200> doc;
    DeserializationError error = deserializeJson(doc, server.arg("plain"));

    if (error) {
      server.send(400, "text/plain", "JSON inválido");
      return;
    }

    xGoal = doc["x"] | 0.0;
    yGoal = doc["y"] | 0.0;
    Serial.printf("➡ Coordenadas objetivo recibidas: X=%.4f, Y=%.4f\n", xGoal, yGoal);

    // Enviar por I2C al Arduino esclavo
    int32_t xInt = (int32_t)(xGoal * 10000);
    int32_t yInt = (int32_t)(yGoal * 10000);

    Wire.beginTransmission(SLAVE_ADDR);
    Wire.write((uint8_t *)&xInt, sizeof(xInt));
    Wire.write((uint8_t *)&yInt, sizeof(yInt));
    byte err = Wire.endTransmission();

    if (err == 0) {
      Serial.println("✅ Coordenadas enviadas por I2C");
    } else {
      Serial.printf("❌ Error I2C (%d)\n", err);
    }

    server.send(200, "text/plain", "OK");
  });
    // Endpoint para que Arduino consulte las coords actuales
  server.on("/getcoords", HTTP_GET, []() {
    String json = "{\"x\": " + String(xGoal, 4) + ", \"y\": " + String(yGoal, 4) + "}";
    server.send(200, "application/json", json);
  });

  server.on("/", HTTP_GET, []() {
    server.send(200, "text/plain", "Servidor ESP32-CAM funcionando");
  });
  server.begin();
  Serial.println("Servidor iniciado en puerto 80");
}

void loop() {
  server.handleClient();
  while (gpsSerial.available()) {
    char c = gpsSerial.read();
    gps.encode(c);
  }

  // Imprime en Serial si está fijado
  if (gps.location.isUpdated()) {
    Serial.print("Latitud: ");
    Serial.println(gps.location.lat(), 6);
    Serial.print("Longitud: ");
    Serial.println(gps.location.lng(), 6);
  }

  delay(100);
}

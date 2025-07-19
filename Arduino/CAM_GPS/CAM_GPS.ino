#include <TinyGPSPlus.h>
#include <HardwareSerial.h>
#include <WiFi.h>
#include <WebServer.h>
#include "esp_camera.h"
#define CAMERA_MODEL_AI_THINKER // Has PSRAM
#include "camera_pins.h"

const char* ssid = "Sheldon";
const char* password = "Sheldon&2019";
// const char* ssid = "redpucp";
// const char* password = "C9AA28BA93";

void setupLedFlash(int pin);

TinyGPSPlus gps;// Libreria para decodificar los datos de los modulos GPS(envia datos en formato NMEA)
// SoftwareSerial gpsSerial(13, 15); // RX, TX (desde el punto de vista del ESP32)
//SoftwareSerial gpsSerial(0,1); // RX, TX (desde el punto de vista del ESP32)
HardwareSerial gpsSerial(1);
// Pines GPS
#define GPS_RX 12
#define GPS_TX 13// no se usa, amenos que quiera controlar el gps por comandos
bool fix_obtenido = false;
unsigned long lastGPSMsg = 0;
WebServer server(80);

//Sound Sensor y LED 
const int sound_sensor = 14 ;
//const int pinLED_R = 4;
// const int pinLED_G = 12;
// const int pinLED_B = 11;
const int btn = 15;

/////// ARDUINO
// HardwareSerial arduinoSerial(2); // UART2 para comunicar con el Arduino
// #define ESP_RX 16// no se usa, el arduino sera solo esclavo
// #define ESP_TX 4

void setup() {
  Serial.begin(115200);
  // [PINES LED Y SOUND SENSOR]
  pinMode(pinLED_R, OUTPUT);  
  // pinMode(pinLED_G, OUTPUT);  
  // pinMode(pinLED_B, OUTPUT);  
  pinMode(sound_sensor, INPUT); 
  // Inicializa UART1 para GPS
  gpsSerial.begin(9600, SERIAL_8N1, GPS_RX, GPS_TX);//cada segundo el gps envia datos
  arduinoSerial.begin(9600, SERIAL_8N1, 17, 16); // RX, TX (ESP32-CAM)
  //Asignacion de pines por sofwre, para que estos pines se comuniquen por UART
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
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi conectado");
  Serial.println(WiFi.localIP());// imprime la IP conectadaaaaa
  //Endpoint gps
  server.on("/gps", []() {
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
  server.on("/capture", []() {
    camera_fb_t *fb = esp_camera_fb_get();
    if (!fb) {
      server.send(500, "text/plain", "Error al capturar imagen");
      return;
    }
    server.sendHeader("Content-Type", "image/jpeg");
    server.sendHeader("Content-Length", String(fb->len));
    server.send(200);

    WiFiClient client = server.client();
    client.write(fb->buf, fb->len);

    esp_camera_fb_return(fb);
  }); 
  //Endpoint Ruta
  server.on("/setcoords", HTTP_GET, []() {
    String x = server.arg("x");
    String y = server.arg("y");

    if (x != "" && y != "") {
      String data = "X:" + x + ",Y:" + y ;
      Serial.println("Recibido del Visual:");
      Serial.println(data);
      arduinoSerial.print(data + "\n"); // Reenviar al Arduino por UART2
      server.send(200, "text/plain", "OK");
    } else {
      server.send(400, "text/plain", "Faltan parámetros");
    }
  });
  //Endpoint Sonido
  server.on("/decibeles", HTTP_GET, []() {
    double Lectura =analogRead(14); 
    //crear
  });
  server.begin();
}

void loop() {
  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());
    lastGPSMsg = millis();  // Marcar último dato recibido
  }
  server.handleClient();
  if (gps.location.isValid()) {
    if (!fix_obtenido) {
      Serial.println("Satélites conectados.");
      fix_obtenido = true;
    }

    if(millis() - lastGPSMsg > 2000){
      Serial.print("Latitud: ");
      Serial.println(gps.location.lat(), 6);
      Serial.print("Longitud: ");
      Serial.println(gps.location.lng(), 6);
      // enviamos al Arduino como X, Y 
      String data = "X:" + String(lat, 6) + ",Y:" + String(lon, 6) + ",T:0.00\n";
      arduinoSerial.print(data); // UART2 → Arduino
      Serial.println("Enviado al Arduino: " + data);
      lastGPSMsg = millis();  // Evitar spam de mensajes
    }
  } else {
    if (!fix_obtenido && millis() - lastGPSMsg > 2000) {
      Serial.println("Esperando señal GPS...");
      lastGPSMsg = millis();  // Evitar spam de mensajes
    }
  }
  // // SOUND SENSOR AND RGB
  // double Lectura =analogRead(A0); 
  // Serial.println(Lectura);
  // if(Lectura>700){
  //   digitalWrite(pinLED_R, 200);
  //   // digitalWrite(pinLED_G, 0);
  //   // digitalWrite(pinLED_B, 0);
  //   //delay(200) ;
  // }
  // // else if(Lectura<700 && Lectura>300){
  // //   digitalWrite(pinLED_B, 200);
  // //   digitalWrite(pinLED_R, 0);
  // //   digitalWrite(pinLED_G, 0) ;
  // //   delay(200) ;
  // // }
  // else if(Lectura<300){
  //   // digitalWrite(pinLED_G, 200);
  //   // digitalWrite(pinLED_B, 0);
  //   digitalWrite(pinLED_R, 0);
  //   //delay(200) ;
  }
}

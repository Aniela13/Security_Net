String incomingMessage = "";  // Para almacenar el mensaje entrante
const int sound_sensor = A0 ;
const int pinLED_R = 13;
const int pinLED_G = 12;
const int pinLED_B = 11;

void setup() {
  Serial.begin(9600);  // Inicializar la comunicación UART a 9600 baudios
  pinMode(pinLED_R, OUTPUT);  
  pinMode(pinLED_G, OUTPUT);  
  pinMode(pinLED_B, OUTPUT);  
  pinMode(sound_sensor, INPUT);   
}

void loop() {
  // Verificar si hay datos disponibles en el puerto serial
  if (Serial.available()) {
    // Leer la cadena completa hasta encontrar <LF> (nueva línea)
    incomingMessage = Serial.readStringUntil('\n');

    // Procesar el mensaje recibido
    processMessage(incomingMessage);
    
    // Limpiar la variable de mensaje después de procesarla
    incomingMessage = "";
  }
}

// Función para procesar el mensaje UART recibido
void processMessage(String message) {
  // Eliminar caracteres no deseados <CR> (retorno de carro)
  message.trim();

  // Verificar si el mensaje empieza con el comando "DELIVER"
  if (message.startsWith("DELIVER")) {
    // Dividir el mensaje en partes
    int firstComma = message.indexOf(',');
    int secondComma = message.indexOf(',', firstComma + 1);

    String action = message.substring(0, firstComma);  // "DELIVER"
    String object = message.substring(firstComma + 1, secondComma);  // "TABLE"
    String tableNumber = message.substring(secondComma + 1);  
	
	  int iTableNumber = tableNumber.toInt();
	
    for (int i = 0; i<iTableNumber; i++) 
    {
      digitalWrite(pinLED, HIGH);
      delay(1000);
      digitalWrite(pinLED, LOW);
      delay(1000);
    } 
    // Verificar si se trata de una mesa
    if (object == "TABLE") {
      // Acción: Enviar el robot a la mesa 5
      moveToTable(iTableNumber);  // Ejemplo de una función que movería el robot
    } else {
      Serial.println("Comando no válido o número de mesa incorrecto.");
    }

    /////  double Lectura =analogRead(A0); 
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
    
  } else {
    Serial.println("Comando no reconocido.");
  }
}

// Función de ejemplo para mover el robot a una mesa
void moveToTable(int tableNumber) {
  // Aquí se puede poner el código para controlar el robot mesero
  Serial.print("Moviendo robot a la mesa ");
  Serial.println(tableNumber);
}
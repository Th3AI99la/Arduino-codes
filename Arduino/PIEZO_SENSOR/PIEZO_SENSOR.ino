int ledPino = 13;      
int piezoSensor = A0; 
int limite = 100;  

int leituraSensor = 0;  
int estadoLed = LOW;     

void setup() {
  pinMode(ledPino, OUTPUT); 
  Serial.begin(9600);     
}

void loop() {

  leituraSensor = analogRead(piezoSensor);

  if (leituraSensor >= limite) {
    estadoLed = !estadoLed;
    digitalWrite(ledPino, estadoLed);
    Serial.println("Toc!");
  }
  delay(100);
}

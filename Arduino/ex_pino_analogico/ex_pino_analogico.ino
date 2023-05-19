
int pinoAnalogicoUmidade = A0;

int leituraPinoAnalogico = 0;

int pinoLed1 = 13;
int pinoLed2 = 12;
int pinoLed3 = 11;

void setup() {
  // não precisa declarar pinMode  para entrada analógica!!

  Serial.begin(9600);
  pinMode(pinoLed1, OUTPUT);
  pinMode(pinoLed2, OUTPUT);
  pinMode(pinoLed3, OUTPUT);
}

void loop() {

  leituraPinoAnalogico = analogRead(pinoAnalogicoUmidade);
  Serial.println(leituraPinoAnalogico);
  // solo seco
  if (leituraPinoAnalogico <= 300) {
    digitalWrite(pinoLed1, HIGH);
  } else {
    digitalWrite(pinoLed1, LOW);
  }

  // solo umido
  if ( (leituraPinoAnalogico > 300) &&  (leituraPinoAnalogico < 600)  ) {
    digitalWrite(pinoLed2, HIGH);
  } else {
    digitalWrite(pinoLed2, LOW);
  }

  // solo encharcado
  if ( leituraPinoAnalogico >= 600) {
    digitalWrite(pinoLed3, HIGH);
  } else {
    digitalWrite(pinoLed3, LOW);
  }

  switch (leituraPinoAnalogico){
      case 600:

      break;

      case 700:

      break;

      default:
      break;
  }

}

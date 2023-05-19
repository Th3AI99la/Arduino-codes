int pinoUmidade = 2;

int estadoPino = 0;

int pinoLed = 13;


void setup() {
 
  pinMode(pinoUmidade, INPUT);
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  estadoPino = digitalRead(pinoUmidade);
  Serial.println(estadoPino);

  if (estadoPino == HIGH) {
    digitalWrite(pinoLed, HIGH);
  } else {
    digitalWrite(pinoLed, LOW);
  }

}

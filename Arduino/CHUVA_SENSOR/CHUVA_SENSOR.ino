int pinoChuva = 2;
int estadoChuva = 0;

int pinoLED = 13;

void setup()
{
  pinMode(pinoChuva, INPUT);
  pinMode(pinoLED, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  estadoChuva = digitalRead(pinoChuva);

  if (estadoChuva == HIGH) {
    digitalWrite(pinoLED, HIGH);
    Serial.println("ESTA CHOVENDO");
  }
  if (estadoChuva == LOW) {
    digitalWrite(pinoLED, LOW);
    Serial.println("NAO CHOVE");
  }
}

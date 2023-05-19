int pinoSom = 2;
int estadoSom = 0;

int pinoLED = 13;

void setup()
{
  pinMode(pinoSom, INPUT);
  pinMode(pinoLED, OUTPUT);
}

void loop()
{
  estadoSom = digitalRead(pinoSom);
  
  if (estadoSom == HIGH){
    digitalWrite(pinoLED, HIGH);
  }
  if (estadoSom == LOW){
    digitalWrite(pinoLED, LOW);
  }
}

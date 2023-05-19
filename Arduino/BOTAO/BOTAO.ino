int pinoBotao = 2;
int estadoBotao = 0;

int pinoLED = 13;

void setup()
{
  pinMode(pinoBotao, INPUT);
  pinMode(pinoLED, OUTPUT);
}

void loop()
{
  estadoBotao = digitalRead(pinoBotao);
  
  if (estadoBotao == HIGH){
    digitalWrite(pinoLED, HIGH);
  }
  if (estadoBotao == LOW){
    digitalWrite(pinoLED, LOW);
  }
}

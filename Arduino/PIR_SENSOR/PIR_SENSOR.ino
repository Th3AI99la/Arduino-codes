int pinoPIR = 2;
int estadoPIR = 0;

int pinoLED = 13;

void setup()
{
  pinMode(pinoPIR, INPUT);
  pinMode(pinoLED, OUTPUT);
}

void loop()
{
  estadoPIR = digitalRead(pinoPIR);
  
  if (estadoPIR == HIGH){
    digitalWrite(pinoLED, HIGH);
  }
  if (estadoPIR == LOW){
    digitalWrite(pinoLED, LOW);
  }
}

#include <Servo.h>

Servo meuServo;  // create servo object to control a servo

int pinoPot = A0;  // analog pin used to connect the potentiometer
int leitura;    // variable to read the leituraue from the analog pin

int angulo=0;

void setup() {
  meuServo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.begin(9600);
}

void loop() {
  leitura = analogRead(pinoPot);            // reads the leituraue of the potentiometer (leituraue between 0 and 1023)
  angulo = map(leitura, 0, 1023, 0, 90);     // scale it for use with the servo (leituraue between 0 and 180)
  meuServo.write(angulo);                  // sets the servo position according to the scaled leituraue
  Serial.println(angulo);
  delay(15);                           // waits for the servo to get there
}

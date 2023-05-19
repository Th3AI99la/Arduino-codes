int botao = 2;
int estadoBotao = 0;

int posicao = 0;

#include <Servo.h>
Servo meuServo;


void setup() {

  pinMode(botao, INPUT);
  Servo.attach(9);

}

void loop() {
  estadoBotao = digitalRead(botao);

  if (estadoBotao == HIGH) {
    posicao = random(1, 3);
  }

  if (posicao == 1) {
    // servo ir para 10 graus
    meuServo.write(10);
  }

  if (posicao == 2) {
    //servo ir para 30 graus
    meuServo.write(30);
  }

  if (posicao == 3) {
    // servo ir para 60 graus
    meuServo.write(60);
  }


}

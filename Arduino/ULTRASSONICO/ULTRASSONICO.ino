#include <NewPing.h>

#define TRIGGER_PIN  9
#define ECHO_PIN     8
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

int distancia=0;
int distancia2 =0;

int funcao;

void setup() {
  Serial.begin(115200); 
}

void loop() {

  funcao = millis();

  Serial.println(funcao);

}

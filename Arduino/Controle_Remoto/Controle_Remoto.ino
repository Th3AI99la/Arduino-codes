#include <IRremote.h>

int REC_PINO = 3;
IRrecv irrec(REC_PINO);
decode_results resultados;

#define TECLA 0xFF629D

void setup() {
  Serial.begin(9600);                   // Inicializa a porta serial com velocidade de 9600bps
  irrec.enableIRIn();       // Inicia o receptor
}

void loop() {

  if (irrec.decode(&resultados)) {             // Caso alguma informação seja recebida pelo decodificador infravermelho
    long int codigo = resultados.value;        // Cria uma variável local para recebimento do sinal emitido pelo controle remoto
    Serial.println(codigo, HEX);

    if (codigo == TECLA ) {                   // Caso a tecla "MODE" seja apertada no controle remoto
      Serial.println("TECLA LIDO COM SUCESSO"); // Exibe a mensagem ao usuário
    }

    irrec.resume(); // Limpa o buffer do controle remoto
  }
}

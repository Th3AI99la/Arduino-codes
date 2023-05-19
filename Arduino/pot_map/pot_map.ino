int pinoPot = A0;
int leitura = 0;

int novoValor = 0;

void setup() {
  // nao precisa declarar o pino de entrada analogica
  Serial.begin(9600);
}

void loop() {

   leitura = analogRead(pinoPot);
   novoValor = map(leitura, 0, 1023, 0, 100);

   Serial.print(leitura);
   Serial.print("\t");
   Serial.println(novoValor);  
}

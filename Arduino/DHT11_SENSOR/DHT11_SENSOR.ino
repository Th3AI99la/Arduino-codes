#include "DHT.h"

#define DHTPIN 3    
#define DHTTYPE DHT11  

DHT dht(DHTPIN, DHTTYPE);

float umidade = 0;
float temperatura = 0;

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx teste!"));

  dht.begin();
}

void loop() {
  delay(2000);  // Aguarda atualização do sensor

  float umidade = dht.readHumidity();
  float temperatura = dht.readTemperature();

  Serial.print(F("Umidade: "));
  Serial.print(umidade);
  Serial.print(F("%  Temperatura: "));
  Serial.print(temperatura);
  Serial.println(F("°C "));
}

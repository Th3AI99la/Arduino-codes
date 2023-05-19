#include <OneWire.h>
#include <DallasTemperature.h>

#define PINO_TEMPERATURA 2

OneWire oneWire(PINO_TEMPERATURA);
DallasTemperature sensors(&oneWire);

void setup(){
  Serial.begin(9600);
  sensors.begin();
}

void loop(){
  Serial.print("Lendo todos os sensores...");
  sensors.requestTemperatures(); // Send the command to get temperatures
  Serial.println("Lido");

  float tempC = sensors.getTempCByIndex(0);

  // Se a leitura estiver correta
  if (tempC != DEVICE_DISCONNECTED_C)   {
    Serial.print("Temperatura: ");
    Serial.println(tempC);
  }else{
    Serial.println("Erro: Nao foi possivel ler o sensor");
  }
}

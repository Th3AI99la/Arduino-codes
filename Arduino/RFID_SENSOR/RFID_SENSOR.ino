#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Cria a instancia MFRC522.

#define TAG_AUTORIZADA "F7 29 67 C9"

void setup()
{
  Serial.begin(9600);   // Inicializa a comunicação serial
  SPI.begin();      // Inicializa o SPI Bus
  mfrc522.PCD_Init();   // Inicializa MFRC522
  Serial.println("Aproxime o cartão do leitor RFID");
  Serial.println();

}
void loop()
{
  // Procurando novos cartões
  if ( ! mfrc522.PICC_IsNewCardPresent())  {
    return;
  }
  // Selecionando algum cartão
  if ( ! mfrc522.PICC_ReadCardSerial())  {
    return;
  }
  //Mostrar a UID na serial
  Serial.print("UID tag :");
  String content = "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++)  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Messagem: ");
  content.toUpperCase();
  if (content.substring(1) == TAG_AUTORIZADA) {
    Serial.println("Tag Autorizada");
    Serial.println();
    delay(3000);
  }  else   {
    Serial.println("Tag NÃO Autorizada");
    Serial.println();
    delay(3000);
  }
}

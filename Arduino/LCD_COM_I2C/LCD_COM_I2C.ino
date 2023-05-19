#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 

#define Colunas 16 
#define Linhas  2
#define Endereco  0x3F

LiquidCrystal_I2C lcd(Endereco, Colunas, Linhas); 

void setup()
{  
  lcd.init(); // Inicializa a comunicação com o display já conectado
  lcd.backlight(); // Liga a luz do display
  lcd.clear(); // Limpa a tela do display
}
void loop() 
{
  lcd.setCursor(1,0); // Coloca o cursor do display na coluna 1 e linha 0
  lcd.print("OLA MUNDO "); // Escreve o texto entre aspas duplas
  lcd.setCursor(1, 1); //Coloca o cursor do display na coluna 1 e linha 1
  lcd.print("INCLUDE");  // Escreve o texto entre aspas duplas
  delay(5000);  // Delay de 5 segundos com todas as mensagens na tela
  lcd.clear(); // Limpa o display
}

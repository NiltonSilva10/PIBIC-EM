// Um projeto completo para usar um potenciômetro em conjunto com uma Tela de cristal líquido (LCD)
// Veja o projeto completo no link abaixo

// https://www.tinkercad.com/things/4Xoedk2Fx5g-brave-bigery/editel?sharecode=a6iP7gyDwGg7fBb9D-cyl4-Zsw577k1wQLqjJFP_Iv4

// Link na plataforma do Arduido http://www.arduino.cc/en/Tutorial/LiquidCrystal


#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // Configure o número de colunas e linhas no LCD.

  // Imprima uma mensagem no LCD.
  lcd_1.print("Olá mundo!");
}

void loop()
{
  // definir o cursor para a coluna 0, linha 1
  // (nota: a linha 1 é a segunda linha, pois a contagem começa com 0):
  lcd_1.setCursor(0, 1);
  // imprima o número de segundos desde a reinicialização:
  lcd_1.print(seconds);
  delay(1000); // Espere 1 segundo
  seconds += 1;
}



//Programa: Modulo TM1637 com Arduino e Potenciômetro 1K

#include <Arduino.h>
#include <TM1637Display.h>

//Pinos de controle do modulo
#define CLK 4
#define DIO 5
#define pin_pot A0

//Inicializa o display
TM1637Display display(CLK, DIO);

int valor, angulo;

void setup()
{
  pinMode(A0, INPUT);
}

void loop()
{
  //Define o brilho do display
  display.setBrightness(0x0f);
  
  //Le o valor do potenciometro
  valor = analogRead(pin_pot);
  angulo = (int)(270 * (float)valor/1023);

  //Mostra o valor no display
  display.showNumberDec(angulo, false);

  delay(10);
}

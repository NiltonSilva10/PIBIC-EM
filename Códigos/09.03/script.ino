//Programa: Modulo TM1637 com Arduino e Potenciômetro 1K

#include <Arduino.h>
#include <TM1637Display.h>

//Pinos de controle do modulo
#define CLK 4
#define DIO 5
#define pin_pot A0

//Inicializa o display
TM1637Display display(CLK, DIO);

int valor, angulo, CO = 5;

void setup()
{
  pinMode(A0, INPUT);
}

void MostraAngulo()  //Método para ler o valor do potenciometro e transformar em graus
{

  valor = analogRead(pin_pot);
  angulo = (int)(270 * (float)valor/1023);
  if (angulo < 91)
  {
     display.showNumberDec(angulo, false); 
  }
  else
  {
    display.showNumberDec(0, false);
  }
}
  
void MostraCO() // Método para mostrar a definição do valor do Cateto Oposto
{
  display.showNumberDec(CO, false);
}

void loop()
{
  //Define o brilho do display
  display.setBrightness(0x0f);
  
  //Le o valor do potenciometro do ângulo de Teta (Q)
  valor = analogRead(pin_pot);
  angulo = (int)(270 * (float)valor/1023);
  
  //Mostra ângulo Teta (Q)
  MostraAngulo();
  delay(750);
    
  // Mostra o valor definido do CO
  MostraCO();

  delay(750);
}

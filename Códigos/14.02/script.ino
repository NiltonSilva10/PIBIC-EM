// Link no Tinkercad
// https://www.tinkercad.com/things/2gPNFAAz5EI-grand-albar-vihelmo/editel?sharecode=7CT3LQQ9OpbWKJw8ij7f5zwMQZ8z_uHwwdAgsDs2qbY

/* Links importantes
https://www.todamateria.com.br/seno-cosseno-e-tangente/
https://brasilescola.uol.com.br/matematica/triangulo-retangulo.htm
*/

#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

int sensorValue = 0, Pang = 260, angle = 0; //angle é o ângulo máximo do potenciômetro
double distanceM = 5; // Distância do laser para o receptor estática em metros

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  led_display1.begin(112);  
}

void loop()
{
  // Lê a entrada do potenciômetro no pino analógico 0:
  sensorValue = analogRead(A0);
 
  // Mostra na tela o valor da leitura:
  //Serial.println(sensorValue);
  
  angle = (int)(Pang*(float)sensorValue/1023);
  if (angle <= 90)
  {
    led_display1.println(angle);
  	led_display1.writeDisplay();
  }
  else
  {
    led_display1.println('-0'); // mostra '----' no display
  	led_display1.writeDisplay();
  }    
  
  delay(100); // Espera 100 milisegundos
}

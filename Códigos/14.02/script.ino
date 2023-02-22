// https://www.tinkercad.com/things/2gPNFAAz5EI-grand-albar-vihelmo/editel?sharecode=7CT3LQQ9OpbWKJw8ij7f5zwMQZ8z_uHwwdAgsDs2qbY

#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

int sensorValue = 0;
double distanceM = 5;

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
  
  if (sensorValue > 170 and sensorValue < 511)
  {
    led_display1.println(sensorValue - 170);
    led_display1.writeDisplay();
  }
  else
  {
    led_display1.println('-0'); // mostra '----' no display
    led_display1.writeDisplay();
  }        
  
  delay(100); // Espera 100 milisegundos
}

#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment(), led_display2 = Adafruit_7segment(), led_display3 = Adafruit_7segment();
int angle = 0, Pang = 260;
int pot1 = 0;
int pot2 = 0;
void setup()
{
  led_display1.begin(112);
  led_display2.begin(113);
  led_display3.begin(114);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

int GetHeight(int potencia)
{
  int altura = 0;
  	if (potencia  > 0 and potencia < 120)
    {
    	altura = 0;
    }
  else
    if (potencia  > 121 and potencia < 240)
  {
    altura = 1;
  }
  else
    if (potencia  > 241 and potencia < 360)
  {
    altura = 2;
  }
  else
    if (potencia  > 361 and potencia < 480)
  {
    altura = 3;
  }
  else
    if (potencia  > 481 and potencia < 500)
  {
    altura = 4;
  }
  else
    if (potencia  > 501 and potencia < 620)
  {
    altura = 5;
  }
  else
    if (potencia  > 621 and potencia < 740)
  {
    altura = 6;
  }
  else
    if (potencia  > 741 and potencia < 860)
  {
    altura = 7;
  }
   else
    if (potencia  > 861 and potencia < 980)
  {
    altura = 8;
  }
   else
    if (potencia  > 981 and potencia < 1000)
  {
    altura = 9;
  }
  else
    if (potencia  > 1001 and potencia < 1024)
  {
    altura = 9;
  }
	return altura;
}

void loop()
{
  // read the input on analog pin 0:
  pot1 = analogRead(A0);
  pot2 = analogRead(A1);
  
  angle = (int)(Pang*(float)pot1/1023);
  led_display1.println(angle);
  led_display1.writeDisplay();
  
  led_display2.println(GetHeight(pot2));
  led_display2.writeDisplay();
  
  led_display3.println((float)GetHeight(pot2) / (float)sin(angle));
  led_display3.writeDisplay();
  
   
  
  delay(10); // Atgraso para evitar bug na IDE
}

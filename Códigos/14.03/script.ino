void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT); // Fotorresistor 1
  pinMode(A1, INPUT); // Fotorresistor 2
}

void loop()
{
  //Leitura do F1
  Serial.print("Fotorressistor 1 = ");
  Serial.println(analogRead(A0));
  
  // Leitura do F2
  Serial.print("Fotorressistor 2 = ");
  Serial.println(analogRead(A1));
  if ((analogRead(A0)) - (analogRead(A1)) == 0)
  {
    Serial.println("Luzes iguais!");
  }
  else
  {
    Serial.println("Luzes diferentes!");
  }
  
  // O resultado sempre saiu diferente
  delay(500);
}


int Botao = 13;
int BUZZER = 8;
int valorEntrada = LOW;

void setup (){
  pinMode (BUZZER, OUTPUT);
  pinMode (Botao, INPUT);
}

void loop(){
  valorEntrada = digitalRead(Botao);
  if (valorEntrada == HIGH) {
  tone(BUZZER, 600); 
  delay(500);
    tone(BUZZER, 1200); 
  delay(500);
    tone(BUZZER, 1800); 
  delay(500);
    tone(BUZZER, 2400); 
  delay(500);
    tone(BUZZER, 3000); 
  delay(500);
  }
  else{
     tone(BUZZER, 3000); 
  delay(500);
 
      tone(BUZZER, 2400); 
  delay(500);
      tone(BUZZER, 1800); 
  delay(500);
      tone(BUZZER, 1200); 
  delay(500);
      tone(BUZZER, 600); 
  delay(500);
  }
noTone(BUZZER);
delay(500);
}

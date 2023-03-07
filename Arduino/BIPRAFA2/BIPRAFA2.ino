int BUZZER = 8;
void setup (){
  pinMode (BUZZER, OUTPUT);
}

void loop(){
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
      tone(BUZZER, 2400); 
  delay(500);
      tone(BUZZER, 1800); 
  delay(500);
      tone(BUZZER, 1200); 
  delay(500);
      tone(BUZZER, 600); 
  delay(500);
noTone(BUZZER);
delay(500);
}

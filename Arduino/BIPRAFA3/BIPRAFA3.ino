int BUZZER = 8;
void setup (){
  pinMode (BUZZER, OUTPUT);
}

void loop(){
    tone(BUZZER, 1200,500); 
  delay(500);

}

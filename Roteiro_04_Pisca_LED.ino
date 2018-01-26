/*
OBJETIVO
Criar um sistema que possa ajustar a tempo entre o estado ativo/inativo do led com um
potenciômetro.
*/

void setup() {
pinMode(2,OUTPUT);
pinMode(A1,INPUT);
int pot; 
}

void loop() {

int pot = analogRead(A1);
digitalWrite(2,HIGH);
delay(pot);
digitalWrite(2,LOW);
delay(pot);
}

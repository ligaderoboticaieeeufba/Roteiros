/*
OBJETIVO
Construir um sistemas com 3 LED vermelhos e um botão que enquanto pressionado
acione os leds de forma crescente e quando liberado decresça a barra de leds.
*/

void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(6,INPUT);
}

void loop() {
if(digitalRead(6)==HIGH){
  digitalWrite(2,HIGH);
  delay(500);
}if(digitalRead(6)==HIGH){
  digitalWrite(3,HIGH);
  delay(500);
}if(digitalRead(6)==HIGH){
  digitalWrite(4,HIGH);
  delay(500);
 
}
else{
    digitalWrite(4,LOW);
    delay(500);
    digitalWrite(3,LOW);
    delay(500);
    digitalWrite(2,LOW);
    delay(500);
  }

}

//Roteiro 2

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

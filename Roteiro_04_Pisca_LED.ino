//Roteiro 4
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

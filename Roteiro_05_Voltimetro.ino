/*
OBJETIVO
Criar um sistema que leia a tensão sobre um potenciômetro e exiba a tensão em V pelo
serial monitor.
*/
const int analogInPin = A0;   

float sensorValue = 0;        
float outputValue = 0;

void setup() {
  Serial.begin(9600); 
}


void loop() {
sensorValue = analogRead(analogInPin);                                               
outputValue = (sensorValue*5)/1023;      

  Serial.print("sensor = " );                       
  Serial.print(sensorValue);      
  Serial.print("\t output = ");      
  Serial.println(outputValue,4);   

  delay(2);                     
}


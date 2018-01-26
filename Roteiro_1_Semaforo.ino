#define ledvermelho 12
#define ledamarelo 11
#define ledverde 10
void setup() {
  // Configurando pino como saida
pinMode(ledvermelho,OUTPUT);
pinMode(ledamarelo,OUTPUT);
pinMode(ledverde,OUTPUT);

}

void loop() {
digitalWrite(ledverde,HIGH);
delay(5000);//espera 5 segundos
digitalWrite(ledverde,LOW);
digitalWrite(ledamarelo,HIGH);
delay(1000);//espera 1 segundos
digitalWrite(ledamarelo,LOW);
digitalWrite(ledvermelho,HIGH);
delay(3000);//espera 3 segundos
digitalWrite(ledvermelho,LOW);
digitalWrite(ledverde,HIGH);
}

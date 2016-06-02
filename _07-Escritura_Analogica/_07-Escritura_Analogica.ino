int ledAzul = 3;
int ledVerde = 5;
int ledRojo = 6;

int estadoAzul = 0;
int estadoRojo = 100;
int estadoVerde = 200;

int aumentoAzul = 3;
int aumentoVerde = 4;
int aumentoRojo = 1;

void setup() {
  pinMode(ledAzul,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledRojo,OUTPUT);
}

void loop() {
 analogWrite(ledAzul, estadoAzul);
 analogWrite(ledVerde, estadoVerde);
 analogWrite(ledRojo, estadoRojo);
 estadoAzul = estadoAzul + aumentoAzul;
 estadoVerde = estadoVerde + aumemtoVerde;
 estadoRojo = estadoRojo + aumentoRojo;
 if(estadoAzul > 255){
  aumentoAzul = aumentoAzul * -1;
 }
 if(estadoVerde > 255){
  aumentoVerde = aumentoVerde * -1;
 }
 if(estadoRojo > 255){
  aumentoRojo = aumentoRojo * -1;
 }
 delay(5);
}

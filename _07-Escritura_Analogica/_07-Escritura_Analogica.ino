int ledAzul = 3;
int ledVerde = 5;
int ledRojo = 6;

int estadoAzul = 0;
int estadoRojo = 100;
int estadoVerde = 200;

void setup() {
  pinMode(ledAzul,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledRojo,OUTPUT);
}

void loop() {
 analogWrite(ledAzul, estadoAzul);
 analogWrite(ledVerde, estadoVerde);
 analogWrite(ledRojo, estadoRojo);
 estadoAzul = estadoAzul + 2;
 estadoVerde = estadoVerde + 3;
 estadoRojo = estadoRojo + 1;
 if(estadoAzul > 255){
  estadoAzul = 0;
 }
 if(estadoVerde > 255){
  estadoVerde = 0;
 }
 if(estadoRojo > 255){
  estadoRojo = 0;
 }
}

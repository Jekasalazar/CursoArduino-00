int ledAzul = 3;
int ledVerde = 5;
int ledRojo = 6;

void setup() {
  pinMode(ledAzul,OUTPUT);
}

void loop() {
  for(int i=0; i<255; ++i){
    analogWrite(ledAzul,i);
    delay(10);
  }
  for(int i=255; i>0; --i){
    analogWrite(ledAzul,i);
    delay(10);
  }
}

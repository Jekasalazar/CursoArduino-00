const int pinSalida = 13;
const int pinEntrada = 2;
void setup() {
  pinMode(pinSalida, OUTPUT);// Definimos pin 13 como salida.
  pinMode(pinEntrada,INPUT_PULLUP); //Definimos el pin 2 como entrada y que cuando este desconectado marque como encendida
}

void loop() {
  bool entrada = digitalRead(pinEntrada);
  if(entrada == LOW){
    digitalWrite(pinSalida, HIGH);   // Encendomos la salida
    delay(1000);              // Esperamos 1000 milisegundos(1 segundo)
    digitalWrite(pinSalida, LOW);    // Apagamos la salida
    delay(5);               // Esperamos 500 milisegundos(1/2 segundo) 
  }
}

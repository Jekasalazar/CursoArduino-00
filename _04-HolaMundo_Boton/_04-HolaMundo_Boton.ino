void setup() {
  pinMode(3, OUTPUT);// Definimos pin 3 como salida.
  pinMode(2,INPUT_PULLUP); //Definimos el pin 2 como entrada y que cuando este desconectado marque como encendida
}

void loop() {
  bool entrada = digitalRead(2);
  if(entrada == LOW){
    digitalWrite(3, HIGH);   // Encendomos la salida
    delay(1;              // Esperamos 1000 milisegundos(1 segundo)
    digitalWrite(3, LOW);    // Apagamos la salida
    delay(5);               // Esperamos 500 milisegundos(1/2 segundo) 
  }
}

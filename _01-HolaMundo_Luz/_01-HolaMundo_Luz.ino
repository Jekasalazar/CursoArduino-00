void setup() {
  pinMode(13, OUTPUT);// Definimos pin 13 como salida.
}

void loop() {
  digitalWrite(13, HIGH);   // Encendomos la salida
  delay(1000);              // Esperamos 1000 milisegundos(1 segundo)
  digitalWrite(13, LOW);    // Apagamos la salida
  delay(500);               // Esperamos 500 milisegundos(1/2 segundo) 
}

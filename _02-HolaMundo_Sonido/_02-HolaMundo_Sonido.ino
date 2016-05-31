void setup() {
  pinMode(3, OUTPUT);// Definimos pin 13 como salida.
}

void loop() {
  digitalWrite(3, HIGH);   // Encendomos la salida
  delay(1;              // Esperamos 1000 milisegundos(1 segundo)
  digitalWrite(3, LOW);    // Apagamos la salida
  delay(5);               // Esperamos 500 milisegundos(1/2 segundo) 
}

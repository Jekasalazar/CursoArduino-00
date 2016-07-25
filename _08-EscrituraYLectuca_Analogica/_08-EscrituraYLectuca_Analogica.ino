int led = 3;
int entrada = A0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(entrada,INPUT);
}

void loop() {
  int valor = analogRead(entrada);
  /*
  * Funcion para mapear valores(regla de tres)
  * para este caso:
  *     recive valores de 0 a 1023(lectura analogia)
  *     y da una salida entre 0 y 255(escritura analogica)
  */
  int salida = map(valor,0, 1023, 0, 255); 
  analogWrite(led,salida);
}

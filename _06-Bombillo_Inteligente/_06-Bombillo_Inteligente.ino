void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  int valor = analogRead(A0);
  Serial.println(valor);
  if(valor < 512){
    digitalWrite(2,HIGH);
  }else{
    digitalWrite(1,LOW);
  }
}

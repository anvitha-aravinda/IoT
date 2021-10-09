int pinr=13,piny=10,ping=9;
void setup() {
  pinMode(pinr,OUTPUT);
  pinMode(piny,OUTPUT);
  pinMode(ping,OUTPUT);

}

void loop() {
  digitalWrite(pinr,HIGH);
  digitalWrite(piny,LOW);
  digitalWrite(ping,LOW);
  delay(1000);
  digitalWrite(pinr,LOW);
  digitalWrite(piny,HIGH);
  digitalWrite(ping,LOW);
  delay(1000);
  digitalWrite(pinr,LOW);
  digitalWrite(piny,LOW);
  digitalWrite(ping,HIGH);
  delay(1000);
  

}

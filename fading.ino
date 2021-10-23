int pin1=11;
void setup() {
  pinMode(pin1,OUTPUT);
  

}

void loop() {
  for(int i=0;i<=255;i++){
  analogWrite(pin1,i);
  delay(20);
  }
  for(int i=255;i>=0;i--){
  analogWrite(pin1,i);
  delay(20);
  }

}

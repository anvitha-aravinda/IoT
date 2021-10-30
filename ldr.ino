int pin1=A0,pin2=11,threshold=300;
int value;
void setup() {
  pinMode(pin2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  value=analogRead(pin1);
  Serial.println(value);
  delay(500);
  if(value>threshold)
  {
    digitalWrite(pin2,LOW);
  }
  else
  {
    digitalWrite(pin2,HIGH);
  }

}

int value=0;
int count=1;
int pinI=2;
int pinO=13;
void setup() {
  pinMode(pinI,INPUT);
  pinMode(pinO,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value=digitalRead(pinI);
  if(value==HIGH)
  {
    digitalWrite(pinO,HIGH);
    count++;
    Serial.println(count);
    delay(100);
  }
  else
  {
    digitalWrite(pinO,LOW);
  }

}

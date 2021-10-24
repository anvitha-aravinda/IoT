int input=0;
int pin=13;
void setup() {
  pinMode(pin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0)
  {
    input=Serial.read();
    if(input==67)
    {
      Serial.print("I received ");
      Serial.print(input,DEC);
      digitalWrite(pin,HIGH);
      delay(100);
    }
    else
    { 
            digitalWrite(pin,LOW);
            delay(100);

    }
}

}

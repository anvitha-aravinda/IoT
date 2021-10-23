int pinI=A0;
int pinO=11;
int sensorvalue=0;
int outputvalue=0;
void setup() {
 pinMode(pinI,INPUT);
 pinMode(pinO,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  sensorvalue=analogRead(pinI);
int outputvalue=0;
  outputvalue=map(sensorvalue,0,1023,0,255);
  analogWrite(pinO,sensorvalue);
  Serial.print(sensorvalue);
  Serial.print(outputvalue);

}

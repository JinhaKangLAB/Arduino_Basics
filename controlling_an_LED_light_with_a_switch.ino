void setup() {
 pinMode(4,OUTPUT); //OUTPUT through pin 4
 pinMode(3,INPUT);
}

void loop() {
  digitalWrite(4,digitalRead(3)); //pin 3 read, if you do not push the switch digitalRead(3) = LOW, if you do digitalRead(3) = HIGH
  delay(10);   
}

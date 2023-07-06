void setup() {
  
}

void loop() {
  analogWrite(5, 100);
  analogWrite(6, 100);
  analogWrite(9, 100);
  analogWrite(10, 100);

  delay(1000);

  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);

  delay(1000);
}

float voltage;

void setup() {
  Serial.begin (9600);
}

void loop() {
  voltage = analogRead(0);
  voltage = voltage/1023*5;
  Serial.println(voltage);
  delay(1000);
}

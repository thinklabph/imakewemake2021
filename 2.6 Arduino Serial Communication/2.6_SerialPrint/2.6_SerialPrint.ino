// Serial Print Code by ThinkLab

void setup() {
  Serial.begin (115200);
  Serial.print("This");
  Serial.print("Is");
  Serial.print("Serial.print");
  Serial.print("\n\n");

  Serial.println("This");
  Serial.println("Is");
  Serial.println("Serial.println");
}

void loop() {
}

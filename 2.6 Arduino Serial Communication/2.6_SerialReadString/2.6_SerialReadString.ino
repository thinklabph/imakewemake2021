// Read available string data on Serial and print on Serial Monitor. Code by ThinkLab

void setup() {
  Serial.begin(115200);

  Serial.setTimeout(500);
}

void loop() {
  if (Serial.available() > 0) {
    Serial.println("Data received");

    String data = Serial.readString();  // Waits for the timeout of 1 second

    Serial.print("From PC: ");
    Serial.println(data);
  }
}

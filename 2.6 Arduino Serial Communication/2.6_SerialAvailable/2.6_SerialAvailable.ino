// Check for available data on Serial. Code by ThinkLab

void setup() {
  Serial.begin(115200);     // 9600, 19200, 38400, 57600, 74880, 115200
}

void loop() {
  int numBytesInBuffer = Serial.available();

  Serial.print("numBytesInBuffer: ");
  Serial.println(numBytesInBuffer);

  delay(1000);
}

// Read available data on Serial and print on Serial Monitor. Code by ThinkLab

void setup() {
  Serial.begin(115200); 
}

void loop() {
  int numBytesInBuffer = Serial.available();

  Serial.print("numBytesInBuffer: ");
  Serial.println(numBytesInBuffer);

  if (numBytesInBuffer > 0) {
    char c = Serial.read();
    Serial.print("Character from PC: ");
    Serial.println(c);
  }
  
  delay(2000);
}

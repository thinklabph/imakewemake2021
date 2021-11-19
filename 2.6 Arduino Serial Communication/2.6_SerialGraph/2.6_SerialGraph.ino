// Sawtooth Serial Plotter Code by ThinkLab
int number = 0;
bool going_higher = true;

void setup() {
  Serial.begin(115200);
}

void loop() {

  if (going_higher) {
    Serial.println(number);
    number = number + 1;

    if (number == 100) {
      going_higher = false;
    }
  }
  else {
    Serial.println(number);
    number = number - 1;

    if (number == 0) {
      going_higher = true;
    }
  }

  delay(10);
}

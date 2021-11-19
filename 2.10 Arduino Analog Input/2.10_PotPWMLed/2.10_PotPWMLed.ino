int analogPin = A0;
int analogValue = 0;
int ledPin= 2;

void setup() {
  Serial.begin (9600);
  pinMode (ledPin, OUTPUT);
}

void loop() {
  analogValue = analogRead(analogPin);
  analogValue = map(analogValue, 0, 1023, 0, 255);
  analogWrite (ledPin, analogValue);
}

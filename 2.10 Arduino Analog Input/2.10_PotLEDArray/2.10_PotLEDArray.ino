int analogPin = A0;
int analogValue = 0;
int ledPin[] = {2, 3, 4, 5, 6};
int num;

void setup() {
  Serial.begin (9600);
  for (int i = 0; i < 5; i++) {
    pinMode (ledPin[i], OUTPUT);
  }
}

void loop() {
  analogValue = analogRead(analogPin);
  if (analogValue < 200) {
    num = 1;
  }

  else if ((analogValue >= 200) && (analogValue < 400)) {
    num = 2;
  }

  else if ((analogValue >= 400) && (analogValue < 600)) {
    num = 3;
  }

  else if ((analogValue >= 600) && (analogValue < 800)) {
    num = 4;
  }

  else
    num = 5;

  for (int i = 0; i < num; i++) {
    digitalWrite (ledPin[i], HIGH);
  }
  for (int i = 4; i >= num; i--) {
    digitalWrite (ledPin[i], LOW);
  }
  Serial.println (analogValue);
  //delay (1000);
}

void setup() {
  Serial.begin (9600);
  int val1 = 8;
  int val2 = 3;
  int answer;

  answer = myMultiplyFunction (val1, val2);
  Serial.println (answer);
}

void loop() {
}

int myMultiplyFunction (int x, int y){
  int result;
  result = x * y;
  return result;
}

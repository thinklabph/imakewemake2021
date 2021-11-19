/*  Switch for LED  by ThinkLab

    Turn ON LED when switch is pushed.
    Color code your wires and LEDs.
   
   SETUP:
    LED Circuit: Pin 7 > Wire > LED(+) > LED(-) > Resistor > Ground
    Switch Circuit: Pin 9 > Wire > Switch > Wire > Ground
   
*/

int LEDPin = 7;                             // set LEDPins in the array
int switchPin = 9;                          // momentary switch on pin 12, other side connected 
                                            // to ground
void setup() {
  pinMode (LEDPin, OUTPUT);                 // set all LEDPins as output
  digitalWrite (LEDPin, LOW);               // turn OFF all LEDs on startup
  pinMode(switchPin, INPUT_PULLUP);         // sets the pin to use the onboard input resistor 
}                                           // of the Bluno Mega

void loop() {
  if (digitalRead(switchPin) == LOW)        // switch is pressed - pullup keeps pin high normally
    digitalWrite (LEDPin, HIGH);            // turn ON LEDPin
  else
    digitalWrite (LEDPin, LOW);             // turn OFF LEDPin
  delay (100);
}

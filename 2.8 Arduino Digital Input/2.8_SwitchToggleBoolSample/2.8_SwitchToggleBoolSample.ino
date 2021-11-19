/*  Toggle Switch with Bool Variable by ThinkLab

    Use a momentary switch as a mechanical toggle switch.
    LED can be switched on an off like a toggle switch.
    Push switch to turn ON, LED stays ON.
    Push switch again to turn OFF, LED stays OFF.

    SETUP:
    LED Circuit: Pin 7 > Wire > LED(+) > LED(-) > Resistor > Ground
    Switch Circuit: Pin 9 > Wire > Switch > Wire > Ground
*/

int LEDPin = 7;                             // LED circuit on pin 7
int switchPin = 9;                          // switch on pin 12, other side connected to GND
bool switchState = false;                   // bool variable can store true(5V or HIGH) 
                                            // or false (0V or LOW) only
void setup() {
  pinMode(LEDPin, OUTPUT);                  // set LEDPin as output
  pinMode(switchPin, INPUT_PULLUP);         // sets the pin to use the onboard input resistor 
}                                           // of the Bluno Mega

void loop() {
  if (digitalRead(switchPin) == LOW) {      // switch is pressed - pullup keeps pin high normally
    delay(500);                             // delay to wait for switch to be unpressed 
                                            // (debounce)- avoids unnecessary mechanical presses 
    switchState = !switchState;             // toggle switchState variable from on to off and vice versa
    digitalWrite(LEDPin, switchState);      // toggle LEDPin on/off
  }
}

/*  PLAY TUNES USING A BUZZER by ThinkLab
    
    Buzzer/Speaker plays in the tune of Coffin Dance.
    Plays only once. Reset the Arduino to play the tune again
    
    References:
    1. Notes: https://www.mjmusicnotes.com/coffin-dance-keyboard-notes/
    2. Notes: https://pianoletternotes.blogspot.com/2020/04/coffin-dance-meme.html
    3. Code: https://github.com/Rahul24-06/Arduino-Coffin-Dance-Theme/blob/master/Coffin_dance_arduino/Coffin_dance_arduino.ino

    WIRING SETUP:
    Pin 12 (Arduino) > Buzzer(+) > Buzzer(-) > Ground (Arduino)    
*/

#include "pitches.h"

int melody[] = {
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_F4,    // B4 A4 GS4 E4 +1
  NOTE_G4, 0, NOTE_G4, NOTE_D5,           // FS4 __ FS4 CS5 +1
  NOTE_C5, 0, NOTE_AS4, 0,                // B4 __ A4 __ +1
  NOTE_A4, 0, NOTE_A4, NOTE_A4,           // GS4 __ GS4 GS4 +1
  NOTE_C5, 0, NOTE_AS4, NOTE_A4,          // B4 __ A4 GS4 +1
  NOTE_G4, 0, NOTE_G4, NOTE_AS5,          // FS4 __ FS4 A5 +1
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,   // GS5 A5 GS5 A5 +1
  NOTE_G4, 0, NOTE_G4, NOTE_AS5,          // FS4 __ FS4 A5 +1
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,   // GS5 A5 GS5 A5 +1
  NOTE_G4, 0, NOTE_G4, NOTE_D5,           // FS4 __ FS4 CS5 +1
  NOTE_C5, 0, NOTE_AS4, 0,                // B4 __ A4 __ +1
  NOTE_A4, 0, NOTE_A4, NOTE_A4,           // GS4 __ GS4 GS4 +1
  NOTE_C5, 0, NOTE_AS4, NOTE_A4,          // B4 __ A4 GS4 +1
  NOTE_G4, 0, NOTE_G4, NOTE_AS5,          // FS4 __ FS4 A5 +1
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,   // GS5 A5 GS5 A5 +1
  NOTE_G4, 0, NOTE_G4, NOTE_AS5,          // FS4 __ FS4 A5 +1
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,   // GS5 A5 GS5 A5 +1
  NOTE_G4, 0, NOTE_G4, NOTE_D5,           // FS4 __ FS4 CS5 +1
  NOTE_C5, 0, NOTE_AS4, 0,                // B4 __ A4 __ +1
  NOTE_A4, 0, NOTE_A4, NOTE_A4,           // GS4 __ GS4 GS4 +1
  NOTE_C5, 0, NOTE_AS4, NOTE_A4,          // B4 __ A4 GS4 +1
  NOTE_G4, 0, NOTE_G4, NOTE_AS5,          // FS4 __ FS4 A5 +1
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,   // GS5 A5 GS5 A5 +1
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, // A4 A4 A4 A4 +1
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5,     // CS5 CS5 CS5 CS5 +1
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5,     // B4 B4 B4 B4 +1
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,     // E5 E5 E5 E5 +1
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,     // FS5 FS5 FS5 FS5 +1
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,     // FS5 FS5 FS5 FS5 +1
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,     // FS5 FS5 FS5 FS5 +1
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_F4,    // B4 A4 GS4 E4 +1
  NOTE_G4, 0, NOTE_G4, NOTE_D5,           // FS4 __ FS4 CS5 +1
  NOTE_C5, 0, NOTE_AS4, 0,                // B4 __ A4 __ +1
  NOTE_A4, 0, NOTE_A4, NOTE_A4,           // GS4 __ GS4 GS4 +1
  NOTE_C5, 0, NOTE_AS4, NOTE_A4,          // B4 __ A4 GS4 +1
  NOTE_G4, 0, NOTE_G4, NOTE_AS5,          // FS4 __ FS4 A5 +1
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,   // GS5 A5 GS5 A5 +1
  NOTE_G4, 0, NOTE_G4, NOTE_AS5,          // FS4 __ FS4 A5 +1
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,   // GS5 A5 GS5 A5 +
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
};

void setup() {
  for (int thisNote = 0; thisNote < 156; thisNote++) {

    int noteDuration = 700 / noteDurations[thisNote];
    tone(12, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    noTone(12);
  }
}

void loop() {
  // No need to repeat melody continously. Press reset button on Arduino to play again.
}

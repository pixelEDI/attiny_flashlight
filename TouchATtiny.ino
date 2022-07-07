//ATtiny 45 mit 8mHz

#include "TimerFreeTone.h"
#include "pitches.h"

const byte LED1 = 1;
const byte LED2 = 0;
const byte touch = 4;
const byte sound = 3;

const byte NO_SOUND = 0; // make the rests in the music

// Melody (lib pitche.h)
uint16_t melody[] = {
    NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_A4, NOTE_FS4, NOTE_G4, NO_SOUND,
    NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_DS4, NO_SOUND,
    NOTE_G4, NOTE_D5, NOTE_D5, NOTE_B4, NOTE_G4, NO_SOUND,
    NOTE_G4, NOTE_C5, NOTE_C5, NOTE_AS4, NOTE_G4, NOTE_DS4, NOTE_E4};

// durations: 2 = half note, 4 = quarter note, 8 = eight note, etc
byte noteDurations[] = {
    16,32,16,16,16,16,16,16,16,16,4,
    16, 32,16,16,16,16,16,16,4,16,4,16,
    16,8,8,16,16,16,
    16,8,8,16,16,16,16,
    };

int musicLength = sizeof(melody) / sizeof('NOTE_F5');

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(touch, INPUT);
  pinMode(sound, OUTPUT);
}

void loop()
{

  if (digitalRead(touch) == HIGH)
  {
    // music on
    for (int thisNote = 0; thisNote < musicLength; thisNote++)
    {

      int noteDuration = 2000 / noteDurations[thisNote];
      // Play melody[thisNote] for duration[thisNote] with Volume 0-10
      TimerFreeTone(sound, melody[thisNote], noteDuration, 10);

      // pulsade LED to the sound
      analogWrite(LED1, melody[thisNote]/2);
      analogWrite(LED2, melody[thisNote]/2);

      // pause between notes
      delay(50);
    }
  }

  else
  {
    analogWrite(LED1, 100);
    analogWrite(LED2, 100);
  }
}

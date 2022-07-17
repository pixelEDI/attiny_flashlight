<img src="https://img.shields.io/badge/-ATtiny%20Project-blue.svg?&amp;style=flat-square&amp" style="max-width: 100%;"> <img src="https://img.shields.io/badge/-Arduino%20IDE-%2300979D.svg?&amp;style=flat-square&amp;logo=arduino&amp;logoColor=white" style="max-width: 100%;">


# General info
[![](https://yt-embed.live/embed?v=QPc6CvGHDDU)](http://www.youtube.com/watch?v=QPc6CvGHDDU "Singing Monster Flash Light")

## Code
- For this project we are working with the TimerFreeTone library, which allows us to play a note on a pin with a specific frequency in Hz for a desired duration in milliseconds.
- The additional pitches.h defines the musical notes and associates them with their frequency so that you can address the notes by their names.
- It is important that you flash your ATtiny45 with 8mHz, otherwise the sound will not play properly.
- First we create an array for the melody consisting of the notes we want to play. For a pause in the music, we define a NO_SOUND variable that has 0 Hz. (The song we use for this example is Baby Elephant Walk by Henry Mancini, but you can use any song).
- Next, we create an array for the duration. You need to enter a specific duration for each note, including NO_SOUND. 
- The calculation of the musicLength was given, so just take it as it is.
- When it is on, the LED lights up and when you touch the sensor, the music is played and the LEDs pulsate at the frequency of the notes.

## Hardware
- This little singing DIY flash light runs on an ATtiny45.
- For the sound we added a piezo buzzer and a 100 Ω resistor to soften the sound.
- There are also two 3mm LEDs connected to a 100 Ω resistor as well.
- To trigger the sound, we also included a touch sensor
- We power the flash light with a CR2032 3V button cell battery

![Verdrahtung](https://github.com/pixelEDI/attiny_flashlight/blob/main/TouchATtiny_wiring.jpg)


## 3D Case
Get the Case:   [Thingiverse](https://www.thingiverse.com/thing:5434743)

You like it? Then I would be very happy if you treat me to a coffee on [ko-fi.com/pixeledi](https://www.ko-fi.com/pixeledi)

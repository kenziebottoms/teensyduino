#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
// https://www.pjrc.com/teensy/gui/?info=AudioOutputAnalog#
AudioPlaySerialflashRaw  playSwingRaw;
AudioPlaySerialflashRaw  playHumRaw;
AudioPlaySerialflashRaw  playImpactRaw;
AudioMixer4              mixer;
AudioOutputAnalog        dac;
AudioConnection          patchCord1(playSwingRaw, 0, mixer, 2);
AudioConnection          patchCord2(playHumRaw, 0, mixer, 1);
AudioConnection          patchCord3(playImpactRaw, 0, mixer, 0);
AudioConnection          patchCord4(mixer, dac);
// GUItool: end automatically generated code

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

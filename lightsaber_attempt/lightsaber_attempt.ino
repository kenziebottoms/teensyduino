#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <Adafruit_DotStar.h>

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

// PINS
#define PROP_AMP  5
#define LED_PIN   7

// LED STRIP
Adafruit_DotStar strip = Adafruit_DotStar(
  252, DOTSTAR_BRG);

void setup() {
  // Enable the amplifier on the prop shield
  pinMode(PROP_AMP, OUTPUT);
  digitalWrite(PROP_AMP, HIGH);
  pinMode(LED_PIN, OUTPUT);
  strip.begin();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}

void impactSound(const char *filename) {
  playImpactRaw.play(filename);
}


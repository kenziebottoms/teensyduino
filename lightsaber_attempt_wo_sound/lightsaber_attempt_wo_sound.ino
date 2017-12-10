#include <Adafruit_DotStar.h>
#include <SPI.h>
#include "FastLED.h"

// LED VARS ------------------------------------------- ||

#define NUM_LEDS 33 // Number of LEDs in strip
#define DATA_PIN    11
#define CLOCK_PIN   13
Adafruit_DotStar strip = Adafruit_DotStar(
  NUM_LEDS, DATA_PIN, CLOCK_PIN, DOTSTAR_BRG);
CRGB leds[NUM_LEDS];

// COLOR VARS --------------- ||
#define BLUE    0x0000FF
#define RED     0x00FF00
#define GREEN   0xFF0000
#define CYAN    0xFF00FF
#define YELLOW  0xFFFF00
#define MAGENTA 0x00FFFF
#define BLACK   0x000000
// END COLOR VARS ----------- ||

// END LED VARS --------------------------------------- ||

void setup() {

  pinMode(7, INPUT);

  FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);

  bladeOff();

//  strip.begin(); // Initialize pins for output
//  strip.show();  // Turn all LEDs off ASAP
}

CRGB currentColor = CRGB::Cyan;
boolean activated = false;

void loop() {
  if (digitalRead(7) == LOW) {
    power();
    delay(100);
  }
}

void power() {
  if (activated) {
    powerDown();
  } else {
    powerUp();
  }
}

void powerUp() {
  for (int i=0; i<NUM_LEDS; i++) {
    leds[i] = currentColor;
    FastLED.show();
    delay(5);
  }
  activated = true;
}
void powerDown() {
  for (int i=NUM_LEDS; i>=0; i--) {
    leds[i] = CRGB::Black;
    FastLED.show();
    delay(5); 
  }
  activated = false;
}
void bladeOff() {
  for (int i=0; i<NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
}


#include <Adafruit_DotStar.h>
#include <SPI.h>

// LED VARS ------------------------------------------- ||

#define NUMPIXELS 30 // Number of LEDs in strip
#define DATAPIN    11
#define CLOCKPIN   13
Adafruit_DotStar strip = Adafruit_DotStar(
  NUMPIXELS, DATAPIN, CLOCKPIN, DOTSTAR_BRG);

// COLOR VARS --------------- ||
#define BLUE    0x0000FF
#define RED     0x00FF00
#define GREEN   0xFF0000
#define CYAN    0xFF00FF
#define YELLOW  0xFFFF00
#define MAGENTA 0x00FFFF
// END COLOR VARS ----------- ||

// END LED VARS --------------------------------------- ||

void setup() {

  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
    clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
  #endif

  strip.begin(); // Initialize pins for output
  strip.show();  // Turn all LEDs off ASAP
}


void loop() {
  delay(500);
  powerUp(MAGENTA);
}

void powerUp(uint32_t color) {
  for (int i=0; i<NUMPIXELS; i++) {
    strip.setPixelColor(i, color);
    strip.show();
    delay(5);
  }
}


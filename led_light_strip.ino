#include <FastLED.h>


#define NUM_LEDS 66
#define LED_PIN 2

CRGB led[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(led, NUM_LEDS);
}

void loop() {
  colour_fading(255, 111, 0, 138, 43, 226);
  delay(30000);
  colour_fading(138, 43, 226, 77, 255, 20);
  delay(30000);
  colour_fading(77, 255, 20, 255, 0, 0);
  delay(30000);
  colour_fading(255, 0, 0, 242, 13, 70);
  delay(30000);
  colour_fading(242, 13, 70, 80, 100, 0);
  delay(30000);
    colour_fading(80, 100, 0, 255, 111, 0);
  delay(30000);
}

void colour_fading(int r1, int g1, int b1, int r2, int g2, int b2) {
  for (int i = 0; i <= 255; i++) {
    CRGB fade = blend(CRGB(r1, g1, b1), CRGB(r2, g2, b2), i);
    fill_solid( led, NUM_LEDS, fade);
    delay(50);
    FastLED.show();
  }
}

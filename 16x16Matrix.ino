#include <FastLED.h>

#define LED_PIN  5

#define COLOR_ORDER GRB
#define CHIPSET     WS2811

// Params for width and height
const uint8_t kMatrixWidth = 16;
const uint8_t kMatrixHeight = 16;

#define NUM_LEDS (kMatrixWidth * kMatrixHeight)
CRGB leds_plus_safety_pixel[ NUM_LEDS + 1];
CRGB* const leds( leds_plus_safety_pixel + 1);

// Paramers
uint32_t startTime = 0;

// Main
void loop()
{
    uint32_t ms = millis();
    createFrame(ms, true);


    FastLED.show();
}





void setup() {
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalSMD5050);
  //FastLED.setBrightness( BRIGHTNESS );

  Serial.begin(9600);
  Serial.println(" Hellooooo");
  startTime = millis() + 1000;

  drawSmallZero(5);
  FastLED.show();
  delay(2500);
    drawSmallZero(6);
  FastLED.show();
  delay(2500);

  drawSmallZero(1);
  FastLED.show();
  delay(1000);
  drawSmallZero(2);
  FastLED.show();
  delay(1000);
  drawSmallZero(3);
  FastLED.show();
  delay(1000);
  drawSmallZero(4);
  FastLED.show();
  delay(2500);

  count(9, true); //Count up
  count(9, false); //Count down
}

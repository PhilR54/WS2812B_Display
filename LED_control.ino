
#define BRIGHTNESS_BACKGROUND 45
#define BRIGHTNESS_FOREGROUND 100


// Convert Grind X, Y to pixel ID
uint16_t XY( uint8_t x, uint8_t y)
{
  uint16_t i;
    if( y & 0x01) {
      // Odd rows run backwards
      uint8_t reverseX = (kMatrixWidth - 1) - x;
      i = (y * kMatrixWidth) + reverseX;
    } else {
      // Even rows run forwards
      i = (y * kMatrixWidth) + x;
    }
  return i;
}

void createFrame(uint32_t ms, bool foreground){

    uint8_t brightnessLevel = 0;
    if(foreground)
      brightnessLevel = BRIGHTNESS_FOREGROUND;
    else
      brightnessLevel = BRIGHTNESS_BACKGROUND;
  
    int32_t yHueDelta32 = ((int32_t)cos16( ms * (27/1) ) * (350 / kMatrixWidth));
    int32_t xHueDelta32 = ((int32_t)cos16( ms * (39/1) ) * (310 / kMatrixHeight));
    DrawOneFrame( ms / 65536, yHueDelta32 / 32768, xHueDelta32 / 32768, brightnessLevel);
    if( ms < 500 ) {
      FastLED.setBrightness( scale8( 100, (ms * 256) / 5000));
    } else {
      FastLED.setBrightness(100);
    }
}


// Draw one frame of the animation
void DrawOneFrame( byte startHue8, int8_t yHueDelta8, int8_t xHueDelta8, int8_t brightness)
{
  byte lineStartHue = startHue8;
  for( byte y = 0; y < kMatrixHeight; y++) {
    lineStartHue += yHueDelta8;
    byte pixelHue = lineStartHue;      
    for( byte x = 0; x < kMatrixWidth; x++) {
      pixelHue += xHueDelta8;
      leds[ XY(x, y)]  = CHSV( pixelHue, 255, brightness);
    }
  }
}

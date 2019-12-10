
//#define FONT_NUMER_STYLE_STND

void count(uint8_t no, bool countUp) {
  bool complete = false;
  uint32_t ms = 0;
  int32_t msSinceStart = 0;
  uint32_t startTime = millis();

  Serial.print("Counting: ");
  while (true) {
    ms = millis();
    msSinceStart = ms - startTime;

    if (! countUp)
      msSinceStart = ((no + 1) * 1000) - msSinceStart;

    if (msSinceStart < 0) { //Exit Condition for counting down
      return;
    }
    else if (msSinceStart < 1000) {
      Serial.print(" 0 ");
      createFrame(ms, false);
      drawBigZero();
    }
    else if (msSinceStart < 2000) {
      if (no == 0)
        return;
      Serial.print(" 1 ");
      createFrame(ms, false);
      drawBigOne();
    }
    else if (msSinceStart < 3000) {
      if (no == 1)
        return;
      Serial.print(" 2 ");
      createFrame(ms, false);
      drawBigTwo();
    }
    else if (msSinceStart < 4000) {
      if (no == 2)
        return;
      Serial.print(" 3 ");
      createFrame(ms, false);
      drawBigThree();
    }
    else if (msSinceStart < 5000) {
      if (no == 3)
        return;
      Serial.print(" 4 ");
      createFrame(ms, false);
      drawBigFour();
    }
    else if (msSinceStart < 6000) {
      if (no == 4)
        return;
      Serial.print(" 5 ");
      createFrame(ms, false);
      drawBigFive();
    }
    else if (msSinceStart < 7000) {
      if (no == 5)
        return;
      Serial.print(" 6 ");
      createFrame(ms, false);
      drawBigSix();
    }
    else if (msSinceStart < 8000) {
      if (no == 6)
        return;
      Serial.print(" 7 ");
      createFrame(ms, false);
      drawBigSeven();
    }
    else if (msSinceStart < 9000) {
      if (no == 7)
        return;
      Serial.print(" 8 ");
      createFrame(ms, false);
      drawBigEight();
    }
    else if (msSinceStart < 10000) {
      if (no == 8)
        return;
      Serial.print(" 9 ");
      createFrame(ms, false);
      drawBigNine();
    }
    else if (countUp) { //Exit conditon for counting up
      return;
    }
    FastLED.show();
  }
}


#ifdef FONT_NUMER_STYLE_STND
// Function to convert letter coordinates into 4x4 squares on matrix
void drawSquare(uint8_t x, uint8_t y) {
  leds[ XY( (2 * x) - 1, (2 * y) - 1)] = CHSV( 0, 0, 255);
  leds[ XY( (2 * x) - 1, (2 * y))]   = CHSV( 0, 0, 255);
  leds[ XY( (2 * x)   , (2 * y) - 1)] = CHSV( 0, 0, 255);
  leds[ XY( (2 * x)   , (2 * y))] = CHSV( 0, 0, 255);
}

void drawBigZero() {
  Serial.println("Showing 0...");
  drawSquare(3, 1);
  drawSquare(4, 1);
  drawSquare(5, 1);
  drawSquare(2, 2);
  drawSquare(6, 2);
  drawSquare(2, 3);
  drawSquare(6, 3);
  drawSquare(2, 4);
  drawSquare(6, 4);
  drawSquare(2, 5);
  drawSquare(6, 5);
  drawSquare(2, 6);
  drawSquare(6, 6);
  drawSquare(3, 7);
  drawSquare(4, 7);
  drawSquare(5, 7);
}

void drawBigOne() {
  Serial.println("Showing 1...");
  drawSquare(4, 1);
  drawSquare(6, 2);
  drawSquare(5, 2);
  drawSquare(4, 2);
  drawSquare(4, 3);
  drawSquare(4, 4);
  drawSquare(4, 5);
  drawSquare(4, 6);
  drawSquare(2, 7);
  drawSquare(3, 7);
  drawSquare(4, 7);
  drawSquare(5, 7);
  drawSquare(6, 7);
}

void drawBigTwo() {
  Serial.println("Showing 2...");
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(6, 2);
  drawSquare(2, 2);
  drawSquare(3, 3);
  drawSquare(4, 4);
  drawSquare(5, 5);
  drawSquare(6, 6);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
  drawSquare(2, 7);
}

void drawBigThree() {
  Serial.println("Showing 3...");
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(6, 2);
  drawSquare(2, 2);
  drawSquare(2, 3);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(2, 5);
  drawSquare(2, 6);
  drawSquare(6, 6);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
}

void drawBigFour() {
  Serial.println("Showing 4...");
  drawSquare(6, 1);
  drawSquare(6, 2);
  drawSquare(6, 3);
  drawSquare(6, 4);
  drawSquare(6, 5);
  drawSquare(6, 6);
  drawSquare(5, 6);
  drawSquare(4, 6);
  drawSquare(3, 6);
  drawSquare(2, 6);
  drawSquare(4, 4);
  drawSquare(4, 5);
  drawSquare(4, 7);
}

void drawBigFive() {
  Serial.println("Showing 5...");
  drawSquare(6, 1);
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(2, 1);
  drawSquare(6, 2);
  drawSquare(6, 3);
  drawSquare(6, 4);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(2, 5);
  drawSquare(2, 6);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
}

void drawBigSix() {
  Serial.println("Showing 6...");
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(6, 2);
  drawSquare(2, 2);
  drawSquare(6, 3);
  drawSquare(6, 4);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(6, 5);
  drawSquare(2, 5);
  drawSquare(6, 6);
  drawSquare(2, 6);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
}
void drawBigSeven() {
  Serial.println("Showing 7...");
  drawSquare(6, 1);
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(2, 1);
  drawSquare(2, 2);
  drawSquare(3, 3);
  drawSquare(4, 4);
  drawSquare(4, 5);
  drawSquare(4, 6);
  drawSquare(4, 7);
}
void drawBigEight() {
  Serial.println("Showing 8...");
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(6, 2);
  drawSquare(2, 2);
  drawSquare(6, 3);
  drawSquare(2, 3);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(6, 5);
  drawSquare(2, 5);
  drawSquare(6, 6);
  drawSquare(2, 6);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
}
void drawBigNine() {
  Serial.println("Showing 9...");
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(6, 2);
  drawSquare(6, 3);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(2, 4);
  drawSquare(2, 3);
  drawSquare(2, 2);
  drawSquare(2, 5);
  drawSquare(2, 6);
  drawSquare(6, 6);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
}
///////////////////////////////////////////////////////////////////////////////////////
#else
// Function to convert letter coordinates into 4x4 squares on matrix
void drawSquare(uint8_t x, uint8_t y) {
  leds[ XY( (2 * x) - 2, (2 * y) - 1)] = CHSV( 0, 0, 255);
  leds[ XY( (2 * x) - 2, (2 * y))]   = CHSV( 0, 0, 255);
  leds[ XY( (2 * x) - 1, (2 * y) - 1)] = CHSV( 0, 0, 255);
  leds[ XY( (2 * x) - 1, (2 * y))] = CHSV( 0, 0, 255);
}

void drawBigZero() {
  drawSquare(3, 1);
  drawSquare(4, 1);
  drawSquare(5, 1);
  drawSquare(6, 1);
  drawSquare(2, 2);
  drawSquare(3, 2);
  drawSquare(6, 2);
  drawSquare(7, 2);
  drawSquare(2, 3);
  drawSquare(3, 3);
  drawSquare(6, 3);
  drawSquare(7, 3);
  drawSquare(2, 4);
  drawSquare(3, 4);
  drawSquare(6, 4);
  drawSquare(7, 4);
  drawSquare(2, 5);
  drawSquare(3, 5);
  drawSquare(6, 5);
  drawSquare(7, 5);
  drawSquare(2, 6);
  drawSquare(3, 6);
  drawSquare(6, 6);
  drawSquare(7, 6);
  drawSquare(3, 7);
  drawSquare(4, 7);
  drawSquare(5, 7);
  drawSquare(6, 7);
}

void drawBigOne() {
  drawSquare(4, 1);
  drawSquare(5, 1);
  drawSquare(4, 2);
  drawSquare(5, 2);
  drawSquare(6, 2);
  drawSquare(4, 3);
  drawSquare(5, 3);
  drawSquare(4, 4);
  drawSquare(5, 4);
  drawSquare(4, 5);
  drawSquare(5, 5);
  drawSquare(4, 6);
  drawSquare(5, 6);
  drawSquare(4, 7);
  drawSquare(5, 7);
}

void drawBigTwo() {
  drawSquare(6, 1);
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(7, 2);
  drawSquare(6, 2);
  drawSquare(3, 2);
  drawSquare(2, 2);
  drawSquare(3, 3);
  drawSquare(2, 3);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(6, 5);
  drawSquare(5, 5);
  drawSquare(7, 6);
  drawSquare(6, 6);
  drawSquare(7, 7);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
  drawSquare(2, 7);
}

void drawBigThree() {
  drawSquare(6, 1);
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(7, 2);
  drawSquare(6, 2);
  drawSquare(3, 2);
  drawSquare(2, 2);
  drawSquare(3, 3);
  drawSquare(2, 3);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(3, 5);
  drawSquare(2, 5);
  drawSquare(3, 6);
  drawSquare(2, 6);
  drawSquare(7, 6);
  drawSquare(6, 6);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
}

void drawBigFour() {
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(5, 2);
  drawSquare(4, 2);
  drawSquare(3, 2);
  drawSquare(6, 3);
  drawSquare(4, 3);
  drawSquare(3, 3);
  drawSquare(3, 6);
  drawSquare(7, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(7, 5);
  drawSquare(6, 5);
  drawSquare(5, 5);
  drawSquare(4, 5);
  drawSquare(3, 5);
  drawSquare(2, 5);
  drawSquare(4, 6);
  drawSquare(3, 6);
  drawSquare(4, 7);
  drawSquare(3, 7);
}

void drawBigFive() {
  drawSquare(3, 1);
  drawSquare(4, 1);
  drawSquare(5, 1);
  drawSquare(6, 1);
  drawSquare(7, 1);
  drawSquare(7, 2);
  drawSquare(6, 2);
  drawSquare(7, 3);
  drawSquare(6, 3);
  drawSquare(7, 4);
  drawSquare(6, 4);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(4, 5);
  drawSquare(3, 5);
  drawSquare(4, 6);
  drawSquare(3, 6);
  drawSquare(7, 7);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
}

void drawBigSix() {
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(6, 2);
  drawSquare(5, 2);
  drawSquare(6, 3);
  drawSquare(7, 3);
  drawSquare(7, 4);
  drawSquare(6, 4);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(7, 5);
  drawSquare(6, 5);
  drawSquare(3, 5);
  drawSquare(2, 5);
    drawSquare(7, 6);
  drawSquare(6, 6);
  drawSquare(3, 6);
  drawSquare(2, 6);
  drawSquare(6, 7);
    drawSquare(5, 7);
      drawSquare(4, 7);
        drawSquare(3, 7);
}
void drawBigSeven() {
  drawSquare(7, 1);
  drawSquare(6, 1);
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(2, 1);
  drawSquare(3, 2);
  drawSquare(2, 2);
  drawSquare(4, 3);
  drawSquare(3, 3);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(6, 5);
  drawSquare(5, 5);
  drawSquare(4, 5);
  drawSquare(6, 6);
  drawSquare(5, 6);
  drawSquare(4, 6);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
}
void drawBigEight() {
  drawSquare(6, 1);
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  drawSquare(7, 2);
  drawSquare(6, 2);
  drawSquare(3, 2);
  drawSquare(2, 2);
  drawSquare(7, 3);
  drawSquare(6, 3);
  drawSquare(3, 3);
  drawSquare(2, 3);
  drawSquare(6, 4);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
drawSquare(7, 5);
  drawSquare(6, 5);
  drawSquare(3, 5);
  drawSquare(2, 5);
  drawSquare(7, 6);
  drawSquare(6, 6);
  drawSquare(3, 6);
  drawSquare(2, 6);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
  drawSquare(3, 7);
}
void drawBigNine() {
  drawSquare(6, 1);
  drawSquare(5, 1);
  drawSquare(4, 1);
  drawSquare(3, 1);
  
  drawSquare(7, 2);
  drawSquare(6, 2);
  drawSquare(3, 2);
  drawSquare(2, 2);
  drawSquare(7, 3);
  drawSquare(6, 3);
  drawSquare(3, 3);
  drawSquare(2, 3);
  drawSquare(6, 4);
  drawSquare(5, 4);
  drawSquare(4, 4);
  drawSquare(3, 4);
  drawSquare(2, 4);
  drawSquare(3, 5);
  drawSquare(2, 5);
  drawSquare(4, 6);
  drawSquare(3, 6);
  drawSquare(6, 7);
  drawSquare(5, 7);
  drawSquare(4, 7);
}
#endif

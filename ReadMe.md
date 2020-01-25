# WS2812B_Display - Phil Renouf - WIP

Source code for controlling a 16x16 LED matrix based on WS2811 chipset.

### Features
* Counters:
  * Countdown (n -> 0 (with n <10) ) - Large numbers with animated background 
  * Count-up (0 -> 10  (with n<10) ) - Large numbers with animated background
 
 * Display Numbers
   * Big Numbers 
   * Small Numbers (top left, top right, bottom left, bottom right, middle right, middle left)
   

## Hardware
#### The Display
The display is a 16x16 matrix of leds, similar to the one pictured below:
![Example Matrix](/readMeFiles/ExampleMatrix.JPG?raw=true "Example Matrix")

### Counting Number Styles & Positions

![Different Number Styles](/readMeFiles/NumberStyle.JPG?raw=true "Different Number Styles")

The top style is active for large numbers only using the define: FONT_NUMER_STYLE_STND
* Only small numbers are avaliable in the second (bottom) style. 


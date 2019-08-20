#include "D3anil_ST7789_wrapper.h"

ST7789_wrapper :: ST7789_wrapper(int8_t dc, int8_t rst, int8_t sid, int8_t sclk, int8_t cs)
  : Arduino_ST7789(dc, rst, sid, sclk, cs)
{

}

ST7789_wrapper :: ST7789_wrapper(int8_t dc, int8_t rst, int8_t cs)
  : Arduino_ST7789(dc, rst, cs)
{

}

void ST7789_wrapper :: clear() {
  this -> fillScreen(BLACK);
}

void ST7789_wrapper :: home() {
  this -> setCursor(0, 0);
}

void ST7789_wrapper :: setInvertMode(bool mode) {
  this -> invertDisplay(mode);
}

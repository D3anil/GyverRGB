#include <Arduino_ST7789.h>

class ST7789_wrapper : public Arduino_ST7789
{
    public:
      ST7789_wrapper(int8_t DC, int8_t RST, int8_t SID, int8_t SCLK, int8_t CS = -1);
      ST7789_wrapper(int8_t DC, int8_t RST, int8_t CS = -1);

      void clear();
      void home();
      void setInvertMode();
      void setInvertMode(bool);
};

#include "resistor_color.h"

int color_code(resistor_band_t band)
{
  return band;
}

resistor_band_t *colors()
{
  static resistor_band_t arr_colors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
  return arr_colors;
}

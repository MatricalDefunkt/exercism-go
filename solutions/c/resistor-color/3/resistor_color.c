#include "resistor_color.h"

resistor_band_t resistor_band_colors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};

int color_code(resistor_band_t band)
{
  return resistor_band_colors[band];
}

resistor_band_t *colors()
{
  return resistor_band_colors;
}

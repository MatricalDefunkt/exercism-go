#include "grains.h"
#include <stdint.h>
#include <math.h>

uint64_t square(uint8_t index)
{
  return pow(2, index - 1);
}
uint64_t total(void)
// (1-a^(n+1))/(1-a)
{
  return (uint64_t)pow(2, 64) - 1;
}

#include "leap.h"

bool leap_year(int year)
{
  bool div_4 = year % 4 == 0;
  bool div_100 = year % 100 == 0;
  bool div_400 = year % 400 == 0;

  if (div_100)
  {
    return div_400;
  }
  else
    return div_4;
}
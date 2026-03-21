#include "collatz_conjecture.h"

int steps(int start)
{
  if (start <= 0)
    return ERROR_VALUE;

  int num = start;
  int count = 0;
  while (num != 1)
  {
    count++;
    if (count == __INT_MAX__)
      break;
    if (num % 2 == 0)
    {
      num /= 2;
    }
    else
    {
      num = num * 3 + 1;
    }
  }
  return count;
}
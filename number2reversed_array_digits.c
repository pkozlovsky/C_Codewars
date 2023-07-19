/*
Convert number to a reversed array of digits.
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0]
*/

#include <stddef.h>
#include <inttypes.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
  *length_out = 0;
  do {
    digits[(*length_out)++] = n % 10;
    n /= 10;
  } while(n);
}

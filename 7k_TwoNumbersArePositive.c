/*
Your job is to write a function, which takes three integers a, b, and c as arguments, and returns True if exactly two of of the three integers are positive numbers (greater than zero), and False - otherwise.

Examples:
two_are_positive(2, 4, -3) == True
two_are_positive(-4, 6, 8) == True
two_are_positive(4, -6, 9) == True
two_are_positive(-4, 6, 0) == False
two_are_positive(4, 6, 10) == False
two_are_positive(-14, -3, -4) == False
*/
#include <stdbool.h>

bool two_are_positive(int a, int b, int c) {
    short positive = 0;

    if (a > 0) positive++;
    if (b > 0) positive++;
    if (c > 0) positive++;

    return positive == 2;
}

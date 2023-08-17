/*
DESCRIPTION:
Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)

Example #2: An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)

Note: The function accepts an integer and returns an integer.

Happy Coding!
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned long long square_digits(unsigned long long number) {
    char str[20];
    char squaredStr[40] = "";
    char temp[10];

    
    sprintf(str, "%llu", number);  

    for (int i = 0; i < strlen(str); i++) {
        int digit = str[i] - '0';
        int squared = pow(digit, 2);
        sprintf(temp, "%d", squared);
        strcat(squaredStr, temp);
    }

    
    unsigned long long squaredNumber = strtoull(squaredStr, NULL, 10);  
    //printf("Result: %llu\n", squaredNumber);  

    return squaredNumber;
}

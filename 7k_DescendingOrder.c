/*
Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

Examples:
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321
*/

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

uint64_t descendingOrder(uint64_t n)
{
    int digits[100]; 
    int count = 0;

    while (n > 0) {
        digits[count] = n % 10; // Extract last digit
        n /= 10;                // Remove last digit
        count++;
    }

    // Bubble sort of digits 
    for(int i=0; i<count-1;i++)
    {
        for(int j=0; j<count-1-i;j++)
        {
            if(digits[j]<digits[j+1])  
            {
                int tmp = digits[j];
                digits[j] = digits[j+1];
                digits[j+1] = tmp;
            }
        }
    }
    
    
    uint64_t result = 0;
    for (int i = 0; i < count; i++)   
    {
        result = result*10 + digits[i];
    }    
    
    return result;
}

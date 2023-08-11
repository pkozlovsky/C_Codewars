/*
Filter the number
Oh, no! The number has been mixed up with the text. Your goal is to retrieve the number from the text, can you return the number back to its original state?

Task
Your task is to return a number from a string.

Details
You will be given a string of numbers and letters mixed up, you have to return all the numbers in that string in the order they occur.
*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

long long filter_string(const char *value)
{
    long long result = 0;

    while (*value) 
    {  
        if (isdigit(*value)) {  
            result = result * 10 + (*value -'0');
        }
        value++;
    }
    
    return result; 
}

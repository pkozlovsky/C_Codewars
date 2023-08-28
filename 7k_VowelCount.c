/*
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
*/


#include <stdio.h>
#include <stddef.h>

size_t get_count(const char *s)
{
    int vowels[2][5] = {
        {'a', 'e', 'i', 'o', 'u'},
        {0, 0, 0, 0, 0}
    };
    
    int len = 0;
    const char *temp = s; 
    while (*temp != '\0') {
        len++;
        temp++;
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (s[j] == vowels[0][i])
            {
                vowels[1][i]++;
            }
        }
    }
    size_t sum = 0;
    for(int i=0; i<5;i++) sum += vowels[1][i];
    return sum;
}
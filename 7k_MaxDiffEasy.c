/*
You must implement a function that returns the difference between the largest and the smallest value in a given list / array (lst) received as the parameter.

lst contains integers, that means it may contain some negative numbers
if lst is empty or contains a single element, return 0
lst is not sorted
*/

#include <stddef.h>

unsigned short max_diff(size_t n, const short myArray[n]) {

    if (n == 0) return 0;  

    short max = myArray[0];
    short min = myArray[0];
    for(size_t i=1; i<n; i++) 
    {
        if (myArray[i]>max) max = myArray[i];
    }

    for(size_t i=1; i<n; i++) 
    {
        if (myArray[i]<min) min = myArray[i];
    }

    return max-min;
}
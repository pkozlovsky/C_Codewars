/*
Imagine that you are given two sticks. You want to end up with three sticks of equal length. You are allowed to cut either or both of the sticks to accomplish this, and can throw away leftover pieces.

Write a function, maxlen, that takes the lengths of the two sticks (L1 and L2, both positive values), that will return the maximum length you can make the three sticks.
*/

#include <stdio.h>

double maxlen(double A, double B) {
    double totalSticks = A + B;
    double maxLenghthTogether = totalSticks / 3.0;
    
    while (maxLenghthTogether > 0) {
        int maxLenghthA = (int)(A / maxLenghthTogether);
        int maxLenghthB = (int)(B / maxLenghthTogether);
        
        if (maxLenghthA + maxLenghthB >= 3) {
            return maxLenghthTogether;
        }
        maxLenghthTogether -= 0.000001; 
    }
    
    return 0.0;
}
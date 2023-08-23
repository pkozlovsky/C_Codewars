/*
ATM machines allow 4 or 6 digit PIN codes and PIN codes cannot contain anything but exactly 4 digits or exactly 6 digits.

If the function is passed a valid PIN string, return true, else return false.

Examples (Input --> Output)
"1234"   -->  true
"12345"  -->  false
"a234"   -->  false
*/

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

bool validate_pin(const char *pin)
{
    int len = 0;
    int i = 0;
    while(*(pin+i)!='\0')
    {
        len++; i++;
    }
    if(len!=4 && len!=6) return 0;
    else
    {
        bool isDigit = 1;
        while(*pin)
        {
            if(isdigit(*pin++)==0) isDigit = 0;
        }
        return isDigit;
    }
}

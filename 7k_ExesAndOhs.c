/*
Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false
*/

#include <stdbool.h>

bool xo (const char* str)
{
  int i = 0;
  int len = 0;
  while(str[i] != '\0') 
  {
    len++;
    i++;
  }

  int xes = 0;
  int os = 0;
  
  for(int j=0; j<len; j++)
  {
    if(str[j]=='x' || str[j]=='X') xes++;
    if(str[j]=='o' || str[j]=='O') os++;    
  }

  return xes==os;
}

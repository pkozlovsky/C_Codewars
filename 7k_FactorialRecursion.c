/*
Your task is to write function factorial.
*/

unsigned __int128 factorial(unsigned n)
{
  return (n==0) ? 1 : n*factorial(n-1); 
}

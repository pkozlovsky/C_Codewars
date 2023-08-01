/*
Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'
*/
char *strrev (char *string)
{
    int nElem = 0;
    int i = 0;
    while(string[i] != '\0'){
     nElem += 1;
      i++;
    }
    for(int i = 0; i < nElem / 2; i++) {
        char tmp = string[i];
        string[i] = string[nElem - 1 - i];
        string[nElem - 1 - i] = tmp;
    }
    return string;
}

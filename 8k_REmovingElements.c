/*
Take an array and remove every second element from the array. Always keep the first element and start removing with the next element.

Example:
size_t length = 5;
remove_every_other(&length, {1, 2, 3, 4, 5});
// -->  {1, 3, 5}
*/
#include <stddef.h>

void remove_every_other (size_t *length, int array[*length])
{
    if (*length <= 1) return;

    size_t new_length = 0; 
    for (size_t i = 0; i < *length; i++) {
        if (i % 2 == 0) {
            array[new_length++] = array[i];
        }
    }

    *length = new_length;
}
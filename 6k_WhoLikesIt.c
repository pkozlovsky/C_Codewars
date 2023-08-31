/*
You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
return must be an allocated string
do not mutate input
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *likes(size_t n, const char *const names[n]) {
    char *result = NULL;
    switch (n) {
        case 0:
            result = strdup("no one likes this");
            break;
        case 1:
            asprintf(&result, "%s likes this", names[0]);
            break;
        case 2:
            asprintf(&result, "%s and %s like this", names[0], names[1]);
            break;
        case 3:
            asprintf(&result, "%s, %s and %s like this", names[0], names[1], names[2]);
            break;
        default:
            asprintf(&result, "%s, %s and %zu others like this", names[0], names[1], n - 2);
            break;
    }
    return result;
}

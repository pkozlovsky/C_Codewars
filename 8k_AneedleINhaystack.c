/*
Can you find the needle in the haystack?

Write a function findNeedle() that takes an array full of junk but containing one "needle"

After your function finds the needle it should return a message (as a string) that says:

"found the needle at position " plus the index it found the needle, so:

Example(Input --> Output)

["hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"] --> "found the needle at position 5" 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *find_needle(const char *const haystack[], size_t count) {
    for(size_t i = 0; i < count; i++) {
        if(strcmp(haystack[i], "needle") == 0) {
            char *result = malloc(50); 
            if (result == NULL) {
                return NULL;  
            }
            sprintf(result, "found the needle at position %zu", i);  
            return result;  
        }
    }
    return "needle not found";
}
#include <stdio.h>
#include <ctype.h> 

size_t task3(char *s) {
    if (s == NULL) {
        return 0; 
    }

    size_t count = 0; 

    for (size_t i = 0; s[i] != '\0'; ++i) {
        if (isdigit(s[i])) { 
            count++;
        }
    }

    return count; 
}

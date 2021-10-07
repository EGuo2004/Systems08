#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen( char *s ) {
    int counter;
    int len = 0;
    for(counter = 0; *(s + counter) != 0; counter++) {
        len++;
    }
    return len;
}

char * mystrcpy( char *dest, char *source) {
    int counter = 0;
    int len = mystrlen(source);
    while(counter < len) {
        *(dest + counter) = *(source + counter);
        counter++;
    }
    return *dest;
}

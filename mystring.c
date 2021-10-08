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
	char *destcopy = dest; 
    do {
		(*destcopy) = (*source);
		source++;
		destcopy++;
	} while (*source);
	return dest;
}

char * mystrncat( char *dest, char *source, int n) {
	 int counter = 0;
	 char *destcopy = dest;
	 while(*destcopy){
	 	destcopy++;
	 }
	 while(*source && (counter < n)) {
	 	*(destcopy + counter) = *(source + counter);
		counter++;
	 }
	 return dest;
}

int mystrcmp( char *s1, char *s2 ) {
	while(*s1 || *s2) {
		int v1 = *s1;
		int v2 = *s2;
		if(v1 > v2) {
			return 1;
		} else
		if (v2 > v1) {
			return -1;
		}
		s1++;
		s2++;
	}
	return 0;
}

char * mystrchr( char *s, char c ) {
	while(*s) {
		if(*s == c) {
			return s;
		}
		s++;
	}
	 return NULL;
}
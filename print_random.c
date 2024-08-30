#include <stdio.h>
#include <stdlib.h>
#include "Random.h"
//Given Project code

void rand_string(char *strings, size_t size);

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}
 
void rand_string(char *strings, size_t size){
    for (size_t i = size; i > 0; --i) {
        *strings = randchar();
        ++strings;
    }
    *strings = '\0';
}

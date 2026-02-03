#include "vector.h"
#include <stdlib.h>
#include <stdarg.h>

vector *makeVector(int length, void *first, ...) {
    vector *vec = (vector *)malloc(sizeof(vector));
    
    vec->length = length;
    vec->arr = (void *)malloc(sizeof(void *) * length);
    
    va_list args;
    va_start(args, first);

    void *ptr = first;

    for (int i = 0; i < length; i++) {
        vec->arr[i] = ptr;
        ptr = va_arg(args, void*);
    }
    
    va_end(args);

    return vec;
}
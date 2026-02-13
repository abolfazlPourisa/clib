#include "vector.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void *getElementUnsafe(vector *vec, int index) {
    if (index < 0 || vec->length <= index) {
        printf("\033[33mWarning : Index out of range, program will continue.\033[0m\n");
        return NULL;
    } 
    
    return vec->arr[index];
}

void *getElement(vector *vec, int index) {
    if (index < 0 || vec->length <= index) {
        fprintf(stderr, "\033[31mError : Index out of range, program crashed.\033[0m\n");
        abort();
    }

    return vec->arr[index];
}
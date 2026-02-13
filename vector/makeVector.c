#include "vector.h"
#include <stdlib.h>
#include <stdarg.h>

vector *makeVector(int cap) {
    vector *vec = malloc(sizeof(vector));

    vec->length = 0;
    vec->arr = malloc(sizeof(void *) * cap);
    vec->cap = cap;

    return vec;
}
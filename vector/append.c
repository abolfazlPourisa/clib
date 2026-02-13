#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

void increaseVecCap(vector *vec) {
    int newSize = vec->cap * 2;

    void *temp = realloc(vec->arr, sizeof(void *) * newSize);
    if (temp == NULL) {
        puts("Realloc faild");
        abort();
    }

    vec->arr = temp;
    vec->cap = newSize;
}

void append(vector *vec, void *data) {
    if (vec->cap <= vec->length)
        increaseVecCap(vec);
    // printf("%s\n", data);
    vec->arr[vec->length] = data;
    // printf("%s\n", vec);
    vec->length++;
}
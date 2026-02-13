#ifndef VECTOR_H
#define VECTOR_H
#define DEFAULT_CAP 3

typedef struct {
    void **arr;
    int cap;
    int length;
} vector;

vector *makeVector(int cap);
void *getElementUnsafe(vector *vec, int index);
void *getElement(vector *vec, int index);
void append(vector *vec, void *data);

#endif
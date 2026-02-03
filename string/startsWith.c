#include "string.h"
#include <string.h>

// startsWith return int and get input and prefix 
// for example 
//      
//      char *input = "hello";
//      char *prefix = "h";
//      int isStartsWithh = startsWith(input, prefix);

//      if (isStartsWithh) printf("Word starts with h");

int startsWith(const char *input, const char *prefix) {
    int inputLength = strlen(input);
    int prefixLength = strlen(prefix);

    // return 0 if prefix is longer than input
    if (inputLength < prefixLength) 
        return 0;
 
    // A loop that starts with first index of input and prefix and
    // compare them with together if they are not equal
    // return 0
    // else continue until the last index of prefix 
    for (int index = 0; index < prefixLength; index++) {
        if (input[index] != prefix[index]) 
            return 0;
    }

    return 1;
}
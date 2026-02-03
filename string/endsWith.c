#include "string.h"
#include <string.h>

// endsWith return int and get input and suffix 
// for example 
//      
//      char *input = "suggestion";
//      char *suffix = "ion";
//      int isWordNoun = endsWith(input, suffix);

//      if (isWordNoun) printf("Word is a noun");

int endsWith(const char *input, const char *suffix) {
    int inputLength = strlen(input);
    int suffixLength = strlen(suffix);
    
    // return 0 if suffix is longer than input
    if (suffixLength > inputLength) return 0; 

    // A loop that starts with last index of input and suffix and then
    // compare each word if they are not equal return 0 else continue until the first 
    // index of suffix then return 1
    for (int index = 0; index < suffixLength; index++) {
        if (suffix[suffixLength - 1 - index] != input[inputLength - 1 - index])
            return 0;
    }

    return 1;
}
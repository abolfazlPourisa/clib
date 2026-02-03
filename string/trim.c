#include "string.h"
#include <string.h>
#include <stdlib.h>

// trim return pointer of char* that removed spaces before and after input
// get just input
// for example 
// 
//      char *username = "    isa    ";
//      char *usernameWithoutSpaces = trim(username);
//      
//      printf("%s", usernameWithoutSpaces);
//      
//      free(usernameWithoutSpaces);      
//
//  DO NOT FORGET TO FREE!!!!!!!!!!!!!!

char* trim(const char *input) {
    int length = strlen(input);
    int startIndex = 0;
    int endIndex = length - 1;
    int newLength = 0;

    // A loop that get the first and last index that is not space
    while (input[startIndex] == ' ' || input[endIndex] == ' ') {
        if (input[startIndex] == ' ') startIndex++;
        if (input[endIndex] == ' ') endIndex--;
    }

    // the new length of word
    newLength = endIndex - startIndex + 1;

    // store enugh memory for output
    // the "+ 1" is for '\0'
    char *output = (char *)malloc((newLength * sizeof(char)) + 1);

    // make output that does not have spaces before and after
    int mallocIndex = 0;
    for (startIndex;
        startIndex <= endIndex; 
        startIndex++
    ) output[mallocIndex++] = input[startIndex];

    // put '\0' at the end of the arrey
    output[newLength] = '\0';
    
    // return pointer of output 
    return output;
    // DO NOT FORGET TO FREE!!!!!!!!!!!!!!
}
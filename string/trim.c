#include "string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
    // check input is not NULL
    if (input == NULL) {
        fprintf(stderr, "\033[31mYou can not give NULL to trim, program crashed.\033[0m\n");
        abort();
        // it could return NULL instead of crashing but for more safety it crashes
    }

    int length = strlen(input);
    int startIndex = 0;
    int endIndex = length - 1;

    // get the first index of input NOT SPACE
    while (startIndex < length && input[startIndex] == ' ') 
        startIndex++;

    // get the last index of input NOT SPACE
    while (endIndex > startIndex && input[endIndex] == ' ') 
        endIndex--;

    // the new length of word
    int newLength = endIndex - startIndex + 1;

    // store enugh memory for output
    // the "+ 1" is for '\0'
    char *output = malloc((newLength * sizeof(char)) + 1);
    
    // check malloc is successful
    if (output == NULL) {
        fprintf(stderr, "\033[31mSystem Error : Malloc faild, program crashed.\033[0m\n");
        abort();
    }

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
# clib
A lib for C with varios prepared methods like trim, endswith and startwith for libstring and...

## Complie and run with out auto installer
Example for complie and run a method about string

```bash
gcc -Lbuild -Istring -lstring main.c -o main
./main
```
"-Lbuild" is the path of libraries 
"-Istring" is the path of headers 
"-lstring" is the name of the library with out prefix and suffix the fulle name of library is libstring.a.

## Comple and run with auto installer
Soon

## Example of complie and run with out auto installer

Code
```c
#include <string.h>
#include <stdio.h>

int main() {
    printf("<%s>\n", trim(" hello world    "));

    return 0;
}
```

Compile and run
```bash
gcc -Lbuild -Istring -lstring main.c -o main
./main
```

it is when you are using library in build if you are not doing this you can do this

```c
#include <string/string.h>
#include <stdio.h>

int main() {
    printf("<%s>\n", trim(" hello world    "));

    return 0;
}
```

```bash
gcc -c main.c -o main.o
gcc -c string/trim.c -o trim.o

gcc main.o trim.o -o main
./main
```

or if you are not in clib folder you can do this 

```bash
gcc -c main.c -Iclib -o main.o
gcc -c string/trim.c -o trim.o

gcc main.o trim.o -o main
./main
```

with "-Iclib" you said to complier to find libraries in clib folder

## Example of complie and run with auto installer
Soon
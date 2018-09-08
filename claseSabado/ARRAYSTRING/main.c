#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGLEN 5

int main()
{
    char miString(STRINGLEN);

    strncpy(miString, "pepe", STRINGLEN);
    printf("%s", miString);



}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[80];
    strcpy(str, "these ");
    strcat(str, "strings ");
    strcat(str, "are ");
    strcat(str, "concatenated.");
    printf("str = \"%s\"\n", str);

    return 0;
}
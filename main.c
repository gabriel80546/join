#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *left, char *right) {
    int i, j;
    int tamanho;
    char *saida;

    tamanho = strlen(left) + strlen(right) + 1;
    saida = (char*) malloc(sizeof(char) * tamanho);

    for(i = 0; i < strlen(left); i++) {
        saida[i] = left[i];
    }
    j = i;
    for(i = 0; i < strlen(right); i++) {
        saida[i + j] = right[i];
    }
    saida[tamanho] = '\0';
    return saida;
}

int main() {
    char str1[80];
    char *str2;

    strcpy(str1, "usando ");
    strcat(str1, "strcat ");
    strcat(str1, "para ");
    strcat(str1, "juntar.");
    printf("str = \"%s\"\n", str1);

    str2 = join("Ola", "Mundo");
    printf("join() => \"%s\"\n", str2);

    free(str2);
    return 0;
}

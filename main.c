#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *join(char *left, char *right) {
    int i;
    int tamanho;
    char *saida;

    tamanho = strlen(left) + strlen(right) + 1;
    printf("join1: \"%s\" + \"%s\" = %i\n", left, right, (tamanho - 1));

    saida = (char*) malloc(sizeof(char) * tamanho);





    // for(i = 0; i < (tamanho - 1); i++) {
    //     saida[i] = 'X';
    // }
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
    printf("join() = %p\n", join);


    str2 = join("Ola", "Mundo");
    printf("join() => \"%s\"\n", str2);

    free(str2);
    return 0;
}

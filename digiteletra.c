#include <stdio.h>
#include <stdlib.h>

int main () {
    char ch;

    printf("\nDigiteuma letra de 'a' a 'z': ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf ("\nVoce digitou uma letra minuscula");
    }
    return 0;
}
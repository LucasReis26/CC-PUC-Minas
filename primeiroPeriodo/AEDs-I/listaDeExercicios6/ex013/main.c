#include <stdio.h>

int main() {
    char letra = 'A';
    char *ptr = &letra;

    //printf("As letras do alfabeto maiúsculo são:\n");

    // Imprime as letras do alfabeto maiúsculo usando ponteiros
    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr);
        (*ptr)++; // Incrementa o valor apontado por ptr
    }

    printf("\n");

    return 0;
}

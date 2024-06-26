#include <stdio.h>

int main() {
    int tamanho;

    // Solicita o tamanho do vetor ao usuário
    //printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Cria um vetor com o tamanho fornecido
    char vetor[tamanho];

    // Solicita os elementos do vetor ao usuário
    //printf("Digite os caracteres do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf(" %c", &vetor[i]);
    }

    //printf("O vetor ao contrário é:\n");

    // Cria um ponteiro para o último elemento do vetor
    char *ptr = &vetor[tamanho - 1];

    // Imprime o vetor ao contrário usando ponteiros
    for (int i = 0; i < tamanho; i++) {
        printf("%c", *ptr);
        ptr--; // Move o ponteiro para o elemento anterior
    }

    printf("\n");

    return 0;
}

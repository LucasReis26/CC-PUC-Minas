#include <stdio.h>
#include <stdlib.h>

void ordenar(int *vetor, int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (*(vetor + i) > *(vetor + j)) {
                temp = *(vetor + i);
                *(vetor + i) = *(vetor + j);
                *(vetor + j) = temp;
            }
        }
    }
}

int main() {
    int tamanho;
    //printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Memória insuficiente!\n");
        return 1;
    }

    //printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", vetor + i);
    }

    ordenar(vetor, tamanho);

    //printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");

    free(vetor);
    return 0;
}

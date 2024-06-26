#include <stdio.h>

int calcularSoma(int *vetor, int tamanho) {
    int soma = 0;
    // Percorre o vetor e soma todos os elementos
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }
    return soma;
}

int main() {
    int tamanho;

    // Solicita o tamanho do vetor ao usuário
    //printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Cria um vetor com o tamanho fornecido
    int vetor[tamanho];

    // Solicita os elementos do vetor ao usuário
    //printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Calcula a soma dos elementos do vetor
    int soma = calcularSoma(vetor, tamanho);

    // Exibe a soma
    printf("%d", soma);

    return 0;
}

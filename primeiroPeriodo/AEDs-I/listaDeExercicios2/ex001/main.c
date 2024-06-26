#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 001
        Lucas Teixeira Reis
        Data: 21/03/2024
    */

    int num, positivos = 0, negativos = 0, zeros = 0;

    printf("Digite uma sequência de valores inteiros separados por espaços (digite uma letra e pressione enter pra parar): ");

    // Ler a sequência de valores inteiros enquanto houver entrada
    while (scanf("%d", &num)) {
        // Verificar se o número é positivo, negativo ou zero e incrementar os contadores
        if (num > 0)
            positivos++;
        else if (num < 0)
            negativos++;
        else
            zeros++;
    }

    // Exibir os resultados
    printf("Valores positivos: %d\n", positivos);
    printf("Valores negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 002
        Lucas Teixeira Reis
        Data: 21/03/2024
    */

    //Declaração de variáveis para o exercício

    int num, positivos = 0, negativos = 0, zeros = 0, total = 0;
    float percentualPositivos, percentualNegativos, percentualZeros;

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

        total++; // Incrementar o contador total de valores
    }

    // Calcular percentuais
    percentualPositivos = (float)positivos / total * 100;
    percentualNegativos = (float)negativos / total * 100;
    percentualZeros = (float)zeros / total * 100;

    // Exibir os resultados
    printf("Valores positivos: %d (%.2f%%)\n", positivos, percentualPositivos);
    printf("Valores negativos: %d (%.2f%%)\n", negativos, percentualNegativos);
    printf("Zeros: %d (%.2f%%)\n", zeros, percentualZeros);

    return 0;
}

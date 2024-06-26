#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 007
        Lucas Teixeira Reis
        Data: 25/03/2024
    */

    // Declaração de variáveis para o exercício
    int L;

    // Solicitar e ler o número de elementos desejados
    printf("Digite o numero de elementos da sequencia de Fibonacci a serem apresentados: ");
    scanf("%d", &L);

    if (L <= 0)
    {
        printf("Erro: O numero de elementos deve ser positivo.\n");
        return 1; // Encerrar o programa com erro
    }

    // Inicializar os primeiros dois elementos da sequência
    int a = 0, b = 1;

    printf("Os %d primeiros elementos da sequencia de Fibonacci sao:\n", L);

    // Imprimir os L primeiros elementos da sequência de Fibonacci
    for (int i = 0; i < L; i++)
    {
        printf("%d ", a);
        int proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}

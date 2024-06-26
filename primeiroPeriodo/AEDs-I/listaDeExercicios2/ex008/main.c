#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        Lista de Exercícios 02
        Exercício 008
        Lucas Teixeira Reis
        Data: 25/03/2024
    */

    // Declaração de variáveis para o exercício

    int L;

    // Solicitar e ler o limite L
    printf("Digite o limite L: ");
    scanf("%d", &L);

    // Inicializar os primeiros dois elementos da sequência
    int a = 0, b = 1;

    printf("Elementos da sequencia de Fibonacci menores que %d:\n", L);

    // Imprimir os elementos da sequência menores que L
    while (a < L)
    {
        printf("%d ", a);
        int proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}

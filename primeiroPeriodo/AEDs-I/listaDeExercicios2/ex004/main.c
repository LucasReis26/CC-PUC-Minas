#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 004
        Lucas Teixeira Reis
        Data: 25/03/2024
    */

    // Variáveis a serem utilizadas no exercício

    int N;
    double E = 1.0;
    int fatorial = 1;

    // Solicitar e ler o valor de N
    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    // Calcular e adicionar os termos da série
    for (int i = 1; i <= N; i++) {
        // Calcular o fatorial de i
        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }

        // Adicionar o termo 1/i!
        E += 1.0 / fatorial;

        // Reiniciar o fatorial para o próximo termo
        fatorial = 1;
    }

    // Escrever o valor de E
    printf("O valor de E é: %lf\n", E);

    return 0;
}

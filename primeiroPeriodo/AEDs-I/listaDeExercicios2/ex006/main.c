#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 006
        Lucas Teixeira Reis
        Data: 25/03/2024
    */


    // Variáveis a serem utilizadas
    int n;
    float S = 0;

    // Solicitar e ler o valor de n
    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    // Verificar se n é positivo
    if (n <= 0)
    {
        printf("Erro: O valor de n deve ser inteiro e positivo.\n");
        return 1; // Encerrar o programa com erro
    }

    // Calcular e escrever cada termo gerado e o valor final de S
    printf("Termos e soma:\n");
    for (int i = 1; i <= n; i++)
    {
        float termo = 1.0 / i; // Calcular o termo atual
        printf("1/%d = %.2f\n", i, termo); // Escrever o termo atual
        S += termo; // Adicionar o termo atual à soma total
    }

    // Escrever o valor final de S
    printf("O valor final de S é: %.2f\n", S);

    return 0;
}

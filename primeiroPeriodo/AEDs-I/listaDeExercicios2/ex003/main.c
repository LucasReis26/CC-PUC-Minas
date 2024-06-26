#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 003
        Lucas Teixeira Reis
        Data: 25/03/2024
    */

    // Variáveis a serem utilizadas para contagem
    int divisivelPor3e9 = 0, divisivelPor2e5 = 0, num;
    // Loop para receber os 10 números
    printf("Vamos verificar se os numeros sao divisiveis por 3 e 9 ou por 2 e 5!");
    for(int i = 1;i<=10;i++)
    {
        // Verificar se o numero é divisivel por 3 e 9
        printf("\nDigite o %d numero: ",i);
        scanf("%d",&num);
        if(num % 3 == 0 && num % 9 == 0)
        {
            printf("%d eh divisivel por 3 e 9",num);
            divisivelPor3e9++;
        }
        // Verificar se o numero é divisivel por 2 e 5
        else if(num % 2 == 0 && num % 5 == 0)
        {
            printf("%d eh divisivel por 2 e 5");
            divisivelPor2e5++;
        }
        else
        {
            printf("%d nao eh divisivel pelos valores");
        }
    }
    // Exibir a quantidade de numeros divisiveis
    printf("\n\nQuantidade de numeros divisiveis por 3 e 9: %d", divisivelPor3e9);
    printf("\nQuantidade de numeros divisiveis por 2 e 5: %d\n", divisivelPor2e5);

    return 0;
}

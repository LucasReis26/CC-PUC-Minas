#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        Lista de Exercícios 02
        Exercício 005
        Lucas Teixeira Reis
        Data: 25/03/2024
    */

    // Variáveis a serem utilizadas no exercício
    int numFilhos, totalFilhos = 0, numPessoas = 0;
    float salario, totalSalario = 0, maiorSalario = 0;
    int pessoasAte100 = 0;
    char continuar;

    // Loop para ler os dados dos habitantes
    do
    {
        // Solicitar e ler o salário do habitante
        printf("Digite o salario do habitante: ");
        scanf("%f", &salario);

        // Verificar se o salário é negativo
        if (salario < 0)
        {
            printf("Erro: Salario nao pode ser negativo. Encerrando o programa.\n");
            return 0; // Encerrar o programa com código de erro
        }

        // Incrementar o número de pessoas
        numPessoas++;

        // Somar o salário ao total
        totalSalario += salario;

        // Verificar e somar o número de filhos
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);
        totalFilhos += numFilhos;

        // Verificar o maior salário
        if (salario > maiorSalario)
            maiorSalario = salario;

        // Verificar se o salário está abaixo de R$100,00
        if (salario <= 100)
            pessoasAte100++;

        // Verificar se deseja continuar
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    }
    while (continuar == 'S' || continuar == 's');

    // Verificar se foram inseridos dados de pelo menos uma pessoa
    if (numPessoas > 0)
    {
        // Calcular média do salário
        float mediaSalario = totalSalario / numPessoas;

        // Calcular média do número de filhos
        float mediaFilhos = (float)totalFilhos / numPessoas;

        // Calcular percentual de pessoas com salário até R$100,00
        float percentualAte100 = ((float)pessoasAte100 / numPessoas) * 100;

        // Exibir resultados
        printf("\nResultados:\n");
        printf("a) Media do salario da populacao: %.2f\n", mediaSalario);
        printf("b) Media do numero de filhos: %.2f\n", mediaFilhos);
        printf("c) Maior salario: %.2f\n", maiorSalario);
        printf("d) Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percentualAte100);
    }
    else
    {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}

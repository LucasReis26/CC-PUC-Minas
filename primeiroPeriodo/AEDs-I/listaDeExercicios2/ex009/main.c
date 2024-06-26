#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 009
        Lucas Teixeira Reis
        Data: 25/03/2024
    */

    // Declaração de variáveis para o exercício
    float precoCompra, precoVenda;
    int mercadoriasLucroMenor10 = 0, mercadoriasLucroEntre10e20 = 0, mercadoriasLucroMaior20 = 0;
    float totalCompra = 0, totalVenda = 0, lucroTotal = 0;

    // Entrada e processamento dos dados
    do
    {
        printf("Preco de compra: ");
        scanf("%f", &precoCompra);

        // Verificar se o preço de compra é 0 (condição de saída)
        if (precoCompra == 0)
            break;

        printf("Preco de venda: ");
        scanf("%f", &precoVenda);

        // Calcular o lucro da mercadoria
        float lucro = precoVenda - precoCompra;

        // Atualizar contadores de acordo com o lucro da mercadoria
        if (lucro < precoCompra * 0.1)
            mercadoriasLucroMenor10++;
        else if (lucro <= precoCompra * 0.2)
            mercadoriasLucroEntre10e20++;
        else
            mercadoriasLucroMaior20++;

        // Atualizar os totais de compra, venda e lucro
        totalCompra += precoCompra;
        totalVenda += precoVenda;
        lucroTotal += lucro;
    } while (precoCompra != 0);

    // Saída dos resultados
    printf("\nResultados:\n");
    printf("Mercadorias com lucro < 10%%: %d\n", mercadoriasLucroMenor10);
    printf("Mercadorias com 10%% <= lucro <= 20%%: %d\n", mercadoriasLucroEntre10e20);
    printf("Mercadorias com lucro > 20%%: %d\n", mercadoriasLucroMaior20);
    printf("Valor total de compra: %.2f\n", totalCompra);
    printf("Valor total de venda: %.2f\n", totalVenda);
    printf("Lucro total: %.2f\n", lucroTotal);

    return 0;
}

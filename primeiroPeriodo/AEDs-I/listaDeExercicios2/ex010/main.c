#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Lista de Exercícios 02
        Exercício 010
        Lucas Teixeira Reis
        Data: 25/03/2024
    */

    // Declaração de variáveis para o exercício

    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0;
    int voto;

    printf("Digite o codigo do candidato em um voto (ou 0 para encerrar):\n");

    // Loop para ler os votos
    do
    {
        printf("Codigo do candidato (ou 0 para encerrar): ");
        scanf("%d", &voto);

        // Verificar o código do voto e atualizar contadores
        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            case 0:
                break;
            default:
                printf("Codigo invalido.\n");
        }
    } while (voto != 0);

    // Exibir resultados
    printf("\nResultados:\n");
    printf("Total de votos para o candidato 1: %d\n", candidato1);
    printf("Total de votos para o candidato 2: %d\n", candidato2);
    printf("Total de votos para o candidato 3: %d\n", candidato3);
    printf("Total de votos para o candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *saida = fopen("arquivo.txt","w");

    double quantidadeVeiculos,valorAluguel;

    scanf("%lf %lf",&quantidadeVeiculos,&valorAluguel);

    double faturamentoAnual = ((quantidadeVeiculos/3) * valorAluguel) * 12;
    fprintf(saida,"%.2lf\n",faturamentoAnual);
    printf("%.2lf\n",faturamentoAnual);

    double valorMultas = ((quantidadeVeiculos/3) * 0.1) * (valorAluguel * 0.2);
    fprintf(saida,"%.2lf\n",valorMultas);
    printf("%.2lf\n",valorMultas);

    double valorManutencao = (quantidadeVeiculos * 0.02) * 600;
    fprintf(saida,"%.2lf\n",valorManutencao);
    printf("%.2lf",valorManutencao);

    fclose(saida);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
void arquivoInput(FILE *saida, int m, int t)
{
    FILE *entrada = fopen("entrada.txt","r");
    while((fscanf(entrada,"%d %d",&m,&t)) != EOF)
    fprintf(saida,"%d %d\n",m,t);
    fclose(entrada);
}

int main()
{
    FILE *saida = fopen("saida.txt","w");

    int menuAnswer, matricula, telefone;
    char flag = 's';

    scanf("%d",&menuAnswer);

    if(menuAnswer == 2) arquivoInput(saida,matricula,telefone);
    else if (menuAnswer == 1)
    {
        while(flag != 'n')
        {
        scanf("%d %d",&matricula,&telefone);
        fprintf(saida,"%d %d\n",matricula,telefone);
        printf("Deseja continuar? (s ou n)");
        scanf(" %c",&flag);
        }
    }
    else printf("resposta invalida");


    fclose(saida);
    return 0;
}

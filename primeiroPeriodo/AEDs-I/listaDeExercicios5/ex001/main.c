#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maxNum = 10;

    FILE *saida = fopen("saida.txt","w");

    for(int i = 1; i<=maxNum; i++)
        fprintf(saida,"%d\n",i);

    fclose(saida);

    return 0;
}

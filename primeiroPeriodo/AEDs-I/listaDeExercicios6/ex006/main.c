#include <stdio.h>
#include <stdlib.h>

int main()
{
    //FILE *entrada = fopen("entrada.txt","r");
    int mat[4][4], tam = 4, soma = 0, numDiag[4], x = 0;

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            //fscanf(entrada,"%d",&mat[i][j]);
            scanf("%d",&mat[i][j]);

            if(i>j)
                soma+=mat[i][j];

            if(i == j)
            {
                numDiag[x] = mat[i][j];
                x++;
            }

        }
    }

    printf("%d\n",soma);

    for(int i = 0; i < tam; i++)
        printf("%d ",numDiag[i]);


    //fclose(entrada);
    return 0;
}

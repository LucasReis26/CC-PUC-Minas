#include <stdio.h>
#include <stdlib.h>

int *matrizSubtrai(int matrizA[][6],int matrizB[][6])
{

    int *matrizSub = (int*)malloc(4*6*sizeof(int));

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            *(matrizSub+(i*6)+j) = matrizA[i][j] - matrizB[i][j];

        }
    }

    return matrizSub;
}

int *matrizSoma(int matrizA[][6],int matrizB[][6])
{

    int *matrizS = (int*)malloc(4*6*sizeof(int));

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            *(matrizS+(i*6)+j) = matrizA[i][j] + matrizB[i][j];

        }
    }

    return matrizS;
}

void preencheMatriz()
{
    //FILE *entrada = fopen("entrada.txt","r");
    int matrizA[4][6],matrizB[4][6], ln = 4, col = 6;

    for(int i = 0; i < ln; i++)
    {
        for(int j = 0; j < col; j++)
        {
            //fscanf(entrada,"%d",&matrizA[i][j]);
            scanf("%d",&matrizA[i][j]);
        }
    }

    for(int i = 0; i < ln; i++)
    {
        for(int j = 0; j < col; j++)
        {
            //fscanf(entrada,"%d",&matrizB[i][j]);
            scanf("%d",&matrizA[i][j]);
        }
    }



    for(int i = 0; i < ln; i++)
    {
        for(int j = 0; j < col;j++)
        {
            printf("%d ",*(matrizSoma(matrizA,matrizB)+(i*col)+j));
        }
    }

    for(int i = 0; i < ln; i++)
    {
        for(int j = 0; j < col;j++)
        {
            printf("%d ",*(matrizSubtrai(matrizA,matrizB)+(i*col)+j));
        }
    }

    //fclose(entrada);
}

int main()
{

    preencheMatriz();
    return 0;
}

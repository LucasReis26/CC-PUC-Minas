#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int matriz[0][10],int tam)
{
    FILE *entrada = fopen("entrada.txt","r");

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            fscanf(entrada,"%d",&matriz[i][j]);
            //scanf("%d",&matriz[i][j]);
        }
    }

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        //printf("\n");
    }
    printf("TERMINOU MATRIZ");
    fclose(entrada);
}

void trocaLinha(int matriz[][10],int tam)
{
    int aux[10], contador = 0;

    for(int i = 0; i < tam;i++)
    {
        for(int j = 0; j < tam;j++)
        {
            if(i==1)
            {
                aux[contador] = matriz[i][j];
                contador++;
            }
        }
    }

    for(int i = 0; i < tam;i++)
    {
        for(int j = 0; j < tam;j++)
        {
            if(i==1)
            {
                matriz[i][j] = matriz[7][j];
                matriz[7][j] = aux[j];
            }
        }
    }
 /*   printf("\n");
    printf("Funcao A\n");
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(i == 1 || i==7)
                printf("!!!");
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    } */

}

void trocaColuna(int matriz[][10],int tam)
{
    int aux[10], contador = 0;

    for(int i = 0; i < tam;i++)
    {
        for(int j = 0; j < tam;j++)
        {
            if(j==3)
            {
                aux[contador] = matriz[i][j];
                contador++;
            }
        }
    }

    for(int i = 0; i < tam;i++)
    {
        for(int j = 0; j < tam;j++)
        {
            if(j==3)
            {
                matriz[i][j] = matriz[i][9];
                matriz[i][9] = aux[i];

            }
        }
    }
  /*  printf("\n");
    printf("Funcao B\n");
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(j == 3||j==9)
                printf("!!!");
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    } */

}

void trocaDiagonal(int matriz[][10],int tam)
{
    int aux[10], contador = 0;

    for(int i = 0; i < tam;i++)
    {
        for(int j = 0; j < tam;j++)
        {
            if(i==j)
            {
                aux[contador] = matriz[i][j];
                contador++;
            }
        }
    }

    for(int i = 0; i < tam;i++)
    {
        for(int j = 0; j < tam;j++)
        {
            if(tam -1 -i == j)
            {
                matriz[i][i] = matriz[i][j];
                matriz[i][j] = aux[i];

            }
        }
    }
 /*   printf("\n");
    printf("Funcao C\n");
        for(int i = 0; i < tam; i++)
        {
            for(int j = 0; j < tam; j++)
            {
                if(i == j || tam -1 -i == j)
                    printf("!!!");
                printf("%d ",matriz[i][j]);
            }
            printf("\n");
        } */

}
void trocaLinhaCol(int matriz[][10],int tam)
{
    int aux[10], contador = 0;

    for(int i = 0; i < tam;i++)
    {
        for(int j = 0; j < tam;j++)
        {
            if(i==4)
            {
                aux[contador] = matriz[i][j];
                contador++;
            }
        }
    }

    for(int i = 0; i < tam;i++)
    {
        matriz[4][i] = matriz[i][9];
    }
    for(int i = 0; i<tam;i++)
    {
        matriz[i][9] = aux[i];
    }


  /*  printf("\n");
    printf("Funcao D\n");
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(i == 4 || j == 9)
                printf("!!!");
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    } */
}

void exibeMatriz(int matriz[][10],int tam)
{
    //printf("\n");
        for(int i = 0; i < tam; i++)
        {
            for(int j = 0; j < tam; j++)
            {
                printf("%d ",matriz[i][j]);
            }
            //printf("\n");
        }
}

int main()
{

    int *matriz = (int*)malloc(100*sizeof(int));

    preencheMatriz(matriz,10);
    trocaLinha(matriz,10);
    trocaColuna(matriz,10);
    trocaDiagonal(matriz,10);
    trocaLinhaCol(matriz,10);
    exibeMatriz(matriz,10);

    free(matriz);
    return 0;
}

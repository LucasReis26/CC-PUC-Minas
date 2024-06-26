#include <stdio.h>
#include <stdlib.h>

/*
    Exercicio 4 - Lista 6
    Autor: Lucas Teixeira Reis
    Data: 10/05/2024
*/
int somaE(int mat[][5])
{
    int somaE = 0, tam = 5;

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            somaE += mat[i][j];
        }
    }

    return somaE;
}

int somaD(int mat[][5])
{
    int somaD = 0, tam = 5;

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(i + j == tam - 1)
                somaD+=mat[i][j];
        }
    }

    return somaD;
}

int somaC(int mat[][5])
{
    int somaC = 0, tam = 5;

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(i == j)
                somaC+=mat[i][j];
        }
    }

    return somaC;
}

int somaB(int mat[][5])
{
    int somaB = 0, tam = 5;

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
           if(j == 1)
                somaB+=mat[i][j];
        }
    }

    return somaB;
}

int somaA(int mat[][5])
{
    int somaA = 0, tam = 5;

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
           if(i == 3)
                somaA+=mat[i][j];
        }
    }

    return somaA;
}

void preencheMatriz()
{

    int mat[5][5], ln = 5, col = 5;

    for(int i = 0; i < ln; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("%d\n",somaA(mat));
    printf("%d\n",somaB(mat));
    printf("%d\n",somaC(mat));
    printf("%d\n",somaD(mat));
    printf("%d\n",somaE(mat));
}

int main()
{
    preencheMatriz();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
    Exercicio 4 - Lista 6
    Autor: Lucas Teixeira Reis
    Data: 10/05/2024
*/

int main()
{

    int *vetorInt, x, maiorNum = INT_MIN;

    scanf("%d",&x);

    vetorInt = (int*)malloc(x * sizeof(int));

    for(int i = 0; i < x; i++)
        scanf("%d",&vetorInt[i]);


    for(int i = 0; i < x; i++)
        if(vetorInt[i] > maiorNum)
            maiorNum = vetorInt[i];

    printf("%d",maiorNum);

    free(vetorInt);
    return 0;
}

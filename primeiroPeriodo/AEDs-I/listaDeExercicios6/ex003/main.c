#include <stdio.h>
#include <stdlib.h>
/*
    Exercicio 3 - Lista 6
    Autor: Lucas Teixeira Reis
    Data: 10/05/2024
*/

void organizaVetor(int vet1[], int vet2[])
{
    int vetMesclado[20], tamVetMesc = 20;

    for(int i = 0, j = 0; i < tamVetMesc; i+= 2, j++)
    {
        vetMesclado[i] = vet1[j];
        vetMesclado[i+1] = vet2[j];

    }

    for(int i = 0; i < tamVetMesc; i++)
        printf("%d ",vetMesclado[i]);
}

void preencheVetores(int vetor1[],int vetor2[],int tam)
{
    for(int i = 0; i < tam; i++)
    {
        scanf("%d",&vetor1[i]);
    }

    for(int i = 0; i < tam; i++)
    {
        scanf("%d",&vetor2[i]);
    }

    organizaVetor(vetor1,vetor2);
}

int main()
{
    int vetor1[10], vetor2[10], tamanhoVetor = 10;

    preencheVetores(vetor1,vetor2, tamanhoVetor);

    return 0;
}

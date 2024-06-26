#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    char c;

    FILE *saida = fopen("saida.txt","r");

    while(fscanf(saida,"%c",&c) != EOF)
    {
        if(c == 'a') contador++;
    }

    printf("%d CARACTERES\n",contador);
    fclose(saida);
    return 0;
}

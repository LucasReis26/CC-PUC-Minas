#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *entrada = fopen("entrada.txt","r");
    int contador = 0;
    char linha[256];

    while(fgets(linha,256,entrada) != NULL)
    {
        printf("%s",linha);
        contador++;
    }

    printf("%d LINHAS",contador);

    fclose(entrada);
    return 0;
}

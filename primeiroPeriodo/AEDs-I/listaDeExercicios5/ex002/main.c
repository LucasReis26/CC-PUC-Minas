#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *saida = fopen("saida.txt","w");
    char texto[256];

    fgets(texto,256,stdin);
    fprintf(saida,"%s",texto);

    fclose(saida);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *entrada = fopen("arquivo.txt","w");
    int quantidade, contador = 0;
    char letra;

    scanf("%d",&quantidade);

    for(int i = 1; i <= quantidade; i++)
    {
        scanf(" %c",&letra);

        fprintf(entrada,"%c\n",letra);
    }

    fclose(entrada);
    entrada = fopen("arquivo.txt","r");


    while((letra = fgetc(entrada))!=EOF)
    {


        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            contador++;
        }

    }



    printf("%d",contador);
    fclose(entrada);
    return 0;
}

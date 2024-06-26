#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *saida = fopen("saida.txt","w");
    int num, soma = 0;

    scanf("%d",&num);

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            soma += i;

            printf("%d\n",i);
        }
    }

    fprintf(saida,"%d",soma);

    fclose(saida);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    FILE *entrada = fopen("entrada.txt","r");

    float max = INT_MIN,min = INT_MAX,num = 0, contador = 0, total = 0;

    while((fscanf(entrada,"%f",&num))!=EOF)
    {
        if(num > max)max = num;

        if(num < min)min = num;

        total+=num;
        contador++;
    }

    printf("%.2f\n",max);
    printf("%.2f\n",min);
    printf("%.2f\n",total/contador);
    fclose(entrada);
    return 0;
}

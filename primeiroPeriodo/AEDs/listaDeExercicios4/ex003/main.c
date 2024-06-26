#include <stdio.h>
#include <stdlib.h>
int divisao(int numerador, int denominador)
{

    if (numerador < denominador) return 0;
    else
    {
        return (divisao(numerador-denominador,denominador)+1);
    }

}

int main()
{
    int numerador, denominador;

    scanf("%i %i",&numerador,&denominador);
    printf("%i",divisao(numerador,denominador));

    return 0;
}

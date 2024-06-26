#include <stdio.h>
#include <stdlib.h>
int resto(int numerador, int denominador)
{

    if (numerador < denominador) return numerador;
    else
    {
        return (resto(numerador-denominador,denominador));
    }

}

int main()
{
    int numerador, denominador;

    scanf("%i %i",&numerador,&denominador);
    printf("%i",resto(numerador,denominador));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int contaDigito(int num)
{
    if (num >= 0 && num < 10) return 1;
    else if(num >= 10)
    {
       return (contaDigito(num/10)+1);
    }
    else return -1;
}

int main()
{
    int num;

    scanf("%i",&num);
    printf("%i",contaDigito(num));


    return 0;
}

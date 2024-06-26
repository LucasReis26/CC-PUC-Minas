#include <stdio.h>
#include <stdlib.h>
int somaDigito(int num)
{
    if (num >= 0 && num < 10) return num;
    else if(num >= 10)
    {
       return (somaDigito(num/10)+num%10);
    }
    else return -1;
}

int main()
{
    int num;

    scanf("%i",&num);
    printf("%i",somaDigito(num));


    return 0;
}

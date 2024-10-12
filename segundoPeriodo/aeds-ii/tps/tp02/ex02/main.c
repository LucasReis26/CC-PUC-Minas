#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char s[255];
} String;


typedef struct{
    int day;
    int month;
    int year;
}Date;

void constructorDate(Date *ptr, int day, int month, int year)
{
    ptr->day = day;
    ptr->month = month;
    ptr->year = year;
}

void datePrint(Date *ptr)
{
    printf("%d/%d/%d",ptr->day,ptr->month,ptr->year);
}

typedef struct{
    String lista[10];
}Lista;

void listaPrint(Lista *ptr, int tam)
{
    printf("[");

    for(int i = 0; i < tam; i++)
    {
        if(i == tam - 1)
            printf("'%s']",ptr->lista[i].s);
        else
            printf("'%s', ",ptr->lista[i].s);
    }
}

typedef struct{
    int id;
    int generation;
    String name;
    String description;
    Lista types;
    Lista abilities;
    double weight;
    double height;
    int captureRate;
    bool isLegendary;
    Date captureDate;
}Pokemon;

void boolPrint (bool op)
{
    if(op)
        printf("true");
    else
        printf("false");
}

void pokemonPrint(Pokemon *ptr)
{
    printf("[#%d ->",ptr->id);
    printf("%s: ",ptr->name.s);
    printf("%s - ",ptr->description.s);
    //listaPrint(ptr->types);
    printf(" - ");
    //listaPrint(ptr->abilities);
    printf(" - %.1lfkg",ptr->weight);
    printf(" - %.1lfm",ptr->height);
    printf(" - %d%% - ",ptr->captureRate);
    boolPrint(ptr->isLegendary);
    printf(" - %d gen] - ",ptr->generation);
    datePrint(&(ptr->captureDate));
}

int main()
{
    Lista lista;

    for(int i = 0; i < 10; i++)
    scanf(" %[^\n]",&(lista.lista[i].s));

    listaPrint(&lista,10);

    return 0;

}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *nome;
    int diaNiver;
    int mesNiver;
} NIVER;

void preencherNiver(NIVER *vet)
{

    for(int i = 0; i<5;i++)
    {
        (vet+i)->nome=(char*)malloc(20*sizeof(char));
        scanf(" %s",(vet+i)->nome);
        scanf("%d",&(vet+i)->diaNiver);
        scanf("%d",&(vet+i)->mesNiver);
    }

}

void exibeAniversarios(NIVER *vet)
{
    system("cls");
    for(int i = 1; i<=12;i++)
    {
        printf("Aniversariantes do mes %d:\n",i);
        for(int j = 0;j<5;j++)
        {
            if((vet+j)->mesNiver == i)
            {
                printf("Nome: %s,",(vet+j)->nome);
                printf(" Dia: %d\n",(vet+j)->diaNiver);
            }
        }
        printf("\n");
    }
}

int main()
{
    system("cls");

    NIVER *vet = (NIVER*)malloc(40*sizeof(NIVER));

    preencherNiver(vet);
    exibeAniversarios(vet);

    free(vet);
    return 0;
}

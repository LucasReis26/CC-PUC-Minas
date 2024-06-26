#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *nome;
    char *tel;
    float preco;
} LOJAS;

void cadastroLojas(LOJAS *vet)
{
    system("clear");
    for(int i = 0; i < 5;i++)
    {
        (vet+i)->nome=(char*)malloc(20*sizeof(char));
        (vet+i)->tel=(char*)malloc(20*sizeof(char));
        scanf(" %[^\n]",(vet+i)->nome);
        scanf(" %[^\n]",(vet+i)->tel);
        scanf("%f",&(vet+i)->preco);
    }
}

void exibeRelacao(LOJAS *vet)
{
    system("clear");
    float soma = 0;

    for(int i = 0; i < 5;i++)
    {
        soma += (vet+i)->preco;
    }

    float media = soma/5;

    printf("A média dos preços cadastrados é: %.2f\n",media);
    printf("Lojas com preços abaixo da média: ");
    for(int i = 0; i < 5; i++)
    {
        if((vet+i)->preco<media)
        {
            printf("Nome: %s\n",(vet+i)->nome);
            printf("Telefone: %s\n",(vet+i)->tel);
        }
    }

}

int main()
{
    LOJAS *vet = (LOJAS*)malloc(5*sizeof(LOJAS));

    cadastroLojas(vet);
    exibeRelacao(vet);
    
    free(vet);
    return 0;
}

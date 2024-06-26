#include <stdio.h>
#include <stdlib.h>

typedef struct CLIENTES
{
    int codigoCliente;
    char *email;
    int horasAcesso;
    char pagina;
} CLIENTES;

void cadastroClientes(CLIENTES *u)
{
    system("clear");
    printf("-- CADASTRO DE CLIENTES --\n");
    printf("Digite o seu código: ");
    scanf("%d",&u->codigoCliente);
    printf("Digite o seu email: ");
    u->email = (char*)malloc(20*sizeof(char));
    scanf(" %[^\n]",u->email);
    printf("Digite o número de horas de acesso: ");
    scanf("%d",&u->horasAcesso);
    printf("Você possui uma página (S ou N)?: ");
    scanf(" %c",&u->pagina);
    
}

void calculaHoras(CLIENTES *u,float *p)
{
    system("clear");

    float horasBase = 20, horasExcedentes = 0;

    if((u->horasAcesso)<=20)
    {
        *p += 35.00;
    } else 
    {
        horasExcedentes = (u->horasAcesso) - horasBase;

        *p += 35.00 + (2.5 * horasExcedentes);
    }

    if(u->pagina == 'S' || u->pagina == 's')
    {
        *p += 40.00;
    }

    printf("Cliente 1:\n");
    printf("Codigo: %d\n",u->codigoCliente);
    printf("E-mail: %s\n",u->email);
    printf("Horas de Acesso: %d\n",u->horasAcesso);
    printf("Possui Pagina: %c\n",u->pagina);
    printf("Valor a pagar: %.2f Quanzas\n\n",*p);

    printf("Deseja continuar? (S ou N): ");
    scanf(" %c",&u->pagina);
}

int main()
{
    system("clear");

    CLIENTES *usuario = (CLIENTES*)malloc(sizeof(CLIENTES));
    float pagamento = 0;

    cadastroClientes(usuario);

    calculaHoras(usuario,&pagamento);

    system("clear");

    printf("-- PROGRAMA FINALIZADO --\n");

    free(usuario);

    return 0;
}
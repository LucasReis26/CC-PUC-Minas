#include <stdio.h>
#include <stdlib.h>

/*
    Exercicio 1 - Lista 06
    Autor: Lucas Teixeira Reis
    Data: 09/05/2024
*/

void avaliaNota(float notasTurma[], int quantidadeAlunos) //Criando procedimento que recebe vetor e calcula média e diz quantos alunos estão acima da média
{
    float somaNota = 0; //Variável que somará as notas para calcular a média
    int aprovados = 0; //Variável que somará quantos alunos estão acima da média

    for(int i = 0; i < quantidadeAlunos; i++) //Laco de repeticao que avalaia se o aluno ta acima da média e depois soma as notas
    {
        if(notasTurma[i] >= 6)aprovados++;

        somaNota += notasTurma[i];
    }

    float media = somaNota/quantidadeAlunos; //Variável que tira a média da turma

    printf("Média: %.2f\n",media); //Printa resultado na tela
    printf("Alunos acima da média: %d",aprovados); //Printa resultado na tela

}

void preencheVetor() //Criando um procedimento que recebe e preenche um vetor com as notas.
{
    float notaAluno, notasTurma[10]; //variável para armazenar as notas e um vetor para armazenar as notas depois
    int quantidadeAlunos = 10; //Quantidade de alunos na turma

    for(int i = 0; i < quantidadeAlunos; i++) //Escaneia a nota e preenche vetor
    {
        scanf("%f",&notaAluno);

        notasTurma[i] = notaAluno;
    }

    avaliaNota(notasTurma,quantidadeAlunos); //Envia as notas para outro procedimento
}


int main()
{
    preencheVetor();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
    Exercicio 2 - Lista 06
    Autor: Lucas Teixeira Reis
    Data: 09/05/2024
*/

int main()
{
    //Variáveis a serem utilizadas
    float temperaturaMes[31], tempMin = INT_MAX, tempMax = INT_MIN, contaTemp = 0;
    int diasJaneiro = 31, contaDias = 0;

    for(int i = 0; i < diasJaneiro; i++) //Captura as temperaturas e soma elas para calcular a media posteriormente
    {
        scanf("%f",&temperaturaMes[i]);
        contaTemp += temperaturaMes[i];
    }

    float media = contaTemp/diasJaneiro;//Calcula a media da temperatura do mes


    for(int i = 0; i < diasJaneiro; i++) //Percorre o vetor procurando a menor e a maior temperatura e conta quantos dias a temperatura foi inferior a temperatura média
    {
        if(temperaturaMes[i] < tempMin) tempMin = temperaturaMes[i];

        if(temperaturaMes[i] > tempMax) tempMax = temperaturaMes[i];

        if(temperaturaMes[i] < media) contaDias++;
    }
    //Printa o resultado na tela
    printf("Menor e maior temperatura: %.f e %.f\n",tempMin, tempMax);
    printf("Média de temperatura: %.2f\n",media);
    printf("Número de dias nos quais a temperatura foi inferior a temperatura média: %d",contaDias);

    return 0;
}

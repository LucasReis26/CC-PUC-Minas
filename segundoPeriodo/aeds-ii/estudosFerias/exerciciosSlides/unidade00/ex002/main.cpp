/*
    Lucas Teixeira Reis
    Estudos Férias
    Exercício 002
*/

#include <iostream>
#include <cstdlib>

void clearScreen() {
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

//Função para analisar array e retornar valor booleano
bool analisaArray(int *vet, int num, int *arrayLength) 
{   
    //Variáveis a serem utilizadas
    bool acheiNumero = false;

    //Percorre array procurando número
    //Se o número for maior que o termo do meio faça um for procurando os números posteriores
    if(num > *(vet + (*arrayLength/2)))
    {
        //For para cima
        for(int i = (*arrayLength/2)+1; i < *arrayLength; i++)
        {
            if(*(vet+i) == num) 
            {
                acheiNumero = true;
                return acheiNumero;
            }
        }
    }
    //Se o número for menor que o termo do meio faça um for procurando números anteriores
    else if (num < *(vet + (*arrayLength/2)))
    {
        //For para baixo
        for(int i = (*arrayLength/2)+1; i > 0; i--)
        {
            if(*(vet+i) == num) 
            {
                acheiNumero = true;
                return acheiNumero;
            }
        }
    }
    //Se o número for igual ao termo do meio retorne indicando que encontrou o número
    else
    {
        acheiNumero = true;
        return acheiNumero;
    }


    //Se não encontrar retorna false
    return acheiNumero; 
}

//Procedimento para organizar o vetor
void organizaVetor(int *vet,int *arrayLength)
{
    int aux;

    for(int i = 0; i < *arrayLength; i++)
    {
        for(int j = i+1; j < *arrayLength; j++)
        {
            if(*(vet+i) > *(vet+j))
            {
                aux = *(vet + i);
                *(vet+i) = *(vet+j);
                *(vet+j) = aux;
            }
        }
    }
}

int main()
{
    //Limpa a tela (Organização)
    clearScreen();

    //Variáveis a serem utilizadas
    int *arrayLength = new int, num;


    //Cria vetor de Inteiros
    std::cin >> *arrayLength;

    int *vet = new int[*arrayLength];
    
    //Preenche vetor de inteiros
    for(int i = 0; i < *arrayLength; i++)
    {
        std::cin >> *(vet+i);
    }

    //Captura número a ser procurado
    std::cin >> num;

    //Organiza vetor para o exercício
    organizaVetor(vet,arrayLength);

    //Chama função para procurar número
    if(analisaArray(vet,num,arrayLength))
        std::cout << "Encontramos o número!" << std::endl;
    else
        std::cout << "Não encontramos o número!" << std::endl;

    //Fim do programa
    return 0;
}

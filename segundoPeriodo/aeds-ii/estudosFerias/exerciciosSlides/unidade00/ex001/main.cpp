/*
    Lucas Teixeira Reis
    Estudos Férias
    Exercício 001
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
    for(int i = 0; i < *arrayLength; i++)
    {
        //Se encontrar o número retorna true
        if(*(vet+i) == num) 
        {
            acheiNumero = true;
            return acheiNumero;
        }
    }

    //Se não encontrar retorna false
    return acheiNumero; 
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

    //Chama função para procurar número
    if(analisaArray(vet,num,arrayLength))
        std::cout << "Encontramos o número!" << std::endl;
    else
        std::cout << "Não encontramos o número!" << std::endl;

    //Fim do programa
    return 0;
}

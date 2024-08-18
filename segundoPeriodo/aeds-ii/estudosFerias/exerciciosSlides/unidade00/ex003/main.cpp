/*
	Lucas Teixeira Reis
	Exercícios Férias
	Ex003 - Unidade 00
*/

#include <iostream>
#include <climits>

void MaiorMenor(int *array,int x)
{
	int min = INT_MAX, max = INT_MIN;

	for(int i = 0; i < x; i++)
	{
		if(min > *(array+i))
		{
			min = *(array+i);
		}
	}

	for(int i = 0; i < x; i++)
	{
		if(max < *(array+i))
		{
			max = *(array+i);
		}
	}

	std::cout << "Menor valor: " << min << std::endl;
	std::cout << "Maior valor: " <<  max << std::endl;
}

int main()
{
	//Criar um array de Inteiros
	
	int x;

	std::cout << "Digite a quantidade de elementos do array: " << std::endl;

	std::cin >> x;
	
	int* vet = new int[x];

	//Preencha o array de Inteiros
	
	for(int i = 0; i < x; i++)
	{
		std::cin >> *(vet+i);	
	}
	
	MaiorMenor(vet,x);

	delete vet;

	return 0;
}

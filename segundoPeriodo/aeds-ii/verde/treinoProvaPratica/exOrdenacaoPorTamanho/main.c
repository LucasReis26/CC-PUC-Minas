#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapArray(int *array, int n1, int n2)
{
	int temp = *(array + n1);
	*(array + n1) = *(array + n2);
	*(array + n2) = temp;
}

int separaPalavras(char *word,char ***arrayString)
{
	int contador = 1;

	for(int i = 0; i < strlen(word); i++)
	{
		if(*(word+i) == ' ')
			contador++;
	}

	*arrayString = (char **)malloc(contador * sizeof(char *));

	int stringCount = 0;
	int charCount = 0;

	for(int i = 0; i < contador; i++)
	{
		(*arrayString)[i] = (char *)malloc(51 * sizeof(char));
	}

	for(int i = 0; i < strlen(word);i++)
	{
		if(*(word+i) == ' ')
		{
			(*arrayString)[stringCount][charCount] = '\0';
			stringCount++;
			charCount = 0;
		}
		else
		{
			(*arrayString)[stringCount][charCount] = *(word + i);
			charCount++;
		}	
	}
	(*arrayString)[stringCount][charCount] = '\0';
	
	return contador;
}

int* ordenaPalavras(char **arrayString, int tam)
{
	int *intArray = (int *)malloc(tam * sizeof(int));

	for(int i = 0; i < tam; i++)
	{
		*(intArray + i) = i;
	}

	for(int i = 1; i < tam ; i++)
	{

		int j = i - 1;	

		while(j >= 0 && strlen(*(arrayString + *(intArray + j))) < strlen(*(arrayString + *(intArray + j + 1))) )
		{
			swapArray(intArray,j,j+1);
			j--;
		}
	}

	return intArray;
}

int main()
{
	char **arrayString;
	char *string = (char *)malloc(51 * sizeof(char));
	int numPalavras;

	scanf("%d",&numPalavras);

	for(int j = 0; j < numPalavras; j++)
	{
		scanf(" %[^\n]",string);

		int contaPalavras = separaPalavras(string,&arrayString);
		
		int *organizaPalavras = ordenaPalavras(arrayString, contaPalavras);	

		for(int i = 0; i < contaPalavras; i++)
		{
			if(i != (contaPalavras - 1))
				printf("%s ",*(arrayString + *(organizaPalavras + i)));
			else
				printf("%s",*(arrayString + *(organizaPalavras + i)));
		}
		printf("\n");
	}

	free(string);
	free(arrayString);
	return 0;
}

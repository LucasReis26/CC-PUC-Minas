#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int* organizaPalavras(int **arrayString)
{
	int *intArray = (int *)malloc(sizeof(int));
}

int main()
{
	char **arrayString;
	char *string = (char *)malloc(51*sizeof(char));

	scanf(" %[^\n]",string);

	int contaPalavras = separaPalavras(string,&arrayString);
	
	int *organizaPalavras = organizaPalavras(arrayString);	

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separaPalavras(char *word,char ***arrayString)
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
}

int main()
{
	char **arrayString;
	char *string = (char *)malloc(51*sizeof(char));\

	scanf(" %[^\n]",string);

	separaPalavras(string,&arrayString)

	

	return 0;
}

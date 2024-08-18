#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaMaiusculaFunction(char *word,int index)
{
	if (index >= strlen(word))
		return 0;
	else if (*(word + index) >= 65 && *(word+index) <= 90)
		return 1 + contaMaiusculaFunction(word,index + 1);
	else
		return contaMaiusculaFunction(word,index + 1);
}

int contaMaiuscula(char *word)
{
	return contaMaiusculaFunction(word,0);
}

int main ()
{
	char *word = (char *)malloc(255*sizeof(char));

	scanf(" %[^\n]",word);

	while (strcmp(word,"FIM") != 0)
	{

		printf("%d\n",contaMaiuscula(word));
	
		
		scanf(" %[^\n]",word);
	}

	free(word);

	return 0;
}

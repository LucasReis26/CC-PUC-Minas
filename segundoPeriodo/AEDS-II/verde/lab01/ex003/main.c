#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaMaiuscula(char *word)
{
	int cont = 0;

	for(int i = 0; i < strlen(word); i++)
	{
		if (*(word + i) >= 65 && *(word + i) <= 90)
		{
			cont++;
		}
	}

	return cont;
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
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool ehPalindromo(char *word)
{
	for(int i = 0; i < strlen(word)/2; i++)
	{
		if(*(word + i) != *(word + (strlen(word) - 1 - i)))
			return false;
	}

	return true;
}

int main()
{
	char *word = (char *)malloc(255*sizeof(char));
	
	*word = '\0';

	while (strcmp(word,"FIM") != 0)
	{
		scanf(" %[^\n]",word);

		if(ehPalindromo(word))
		{
			printf("SIM\n");
		}
		else
		{
			if(strcmp(word,"FIM") != 0)
			{
				printf("NAO\n");
			}
		}
	}

	free(word);

	return 0;
}

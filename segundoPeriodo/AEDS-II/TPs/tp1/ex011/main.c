#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool ehPalindromo (char *word, int esq, int dir)
{
	if (esq > dir)
		return true;
	else if (*(word + esq) != *(word + dir))
		return false;
	else
		return ehPalindromo(word, esq+1, dir-1);
}

int main()
{
	char *word = (char*)malloc(255*sizeof(char));

	scanf("%[^\n]",word);

	if(ehPalindromo(word,0,strlen(word) - 1))
	{
		printf("SIM\n");
	}
	else
	{
		printf("NÃO\n");
	}

	free(word);

	return 0;	
}

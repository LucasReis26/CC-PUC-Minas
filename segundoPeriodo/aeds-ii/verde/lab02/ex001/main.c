#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	//Declaração das variáveis a serem utilizadas
	char *string1 = (char *)malloc(255*sizeof(char));
	char *string2 = (char *)malloc(255*sizeof(char));
	char *stringRes = (char *)malloc(255*sizeof(char));

	
	//Leitura das Strings
	while(scanf(" %s %s",string1,string2) == 2)
	{
		int ind1 = 0,
	    	    ind2 = 0,
	    	    i = 0;
		

		/*
		int tamstr1 = strlen(string1),
		    tamstr2 = strlen(string2);
		*/
		//Realizando combinações
		if(strlen(string1) == strlen(string2))
		{
			for(i; i < 2*strlen(string1); i++)
			{
				if (i % 2)
				{
					*(stringRes + i) = *(string2 + ind2);
					ind2++;
				}
				else
				{
					*(stringRes + i) = *(string1 + ind1);
					ind1++;
				}

			}
		}
		else if (strlen(string1) > strlen(string2))
		{
			for(i; i < strlen(string2) + (strlen(string2) ); i++)
			{
				
				
				if (i % 2)
				{
					*(stringRes + i) = *(string2 + ind2);
					ind2++;
				}
				else
				{	
					*(stringRes + i) = *(string1 + ind1);
					ind1++;
				}
			}
			for(i; i < strlen(string1) + strlen(string2); i++)
			{
				*(stringRes + i) = *(string1 + ind1);
				ind1++;
			}
		}
		else
		{
			for(i; i < strlen(string1) + (strlen(string1) ); i++)
			{
				
				
				if (i % 2)
				{
					*(stringRes + i) = *(string2 + ind2);
					ind2++;
				}
				else
				{	
					*(stringRes + i) = *(string1 + ind1);
					ind1++;
				}
			}
			for(i; i < strlen(string2) + strlen(string1); i++)
			{
				*(stringRes + i) = *(string2 + ind2);
				ind2++;
			}
		}
		//Printar o resultado na tela
		printf("%s\n",stringRes);
		string1 = (char *)malloc(255*sizeof(char));	
		string2 = (char *)malloc(255*sizeof(char));
		stringRes = (char *)malloc(255*sizeof(char));

	}
	//Desalocar memória
	free(string1);
	free(string2);
	free(stringRes);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x;

	char *num = (char*)malloc(255*sizeof(char));

	FILE *dados = fopen("dados.txt","w");

	scanf("%d",&x);

	for(int i = 0; i < x; i++)
	{
		scanf(" %[^\n]",num);

		fprintf(dados,"%s",num);
	}

	fclose(dados);

	dados = fopen("dados.txt","r");
	fseek(dados,0,SEEK_END);
	int tam = ftell(dados);
	for(int i = tam - 1 ; i >= 0; i--)
	{
		fseek(dados,i + 1,SEEK_SET);

		fgets(num,255,dados);

		printf("%s\n",num);
	}

	fclose(dados);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo1 = fopen("arquivo1.txt","r");
    FILE *arquivo2 = fopen("arquivo2.txt","r");
    FILE *arquivo3 = fopen("arquivo3.txt","a");

    char scanText;

    while((scanText = fgetc(arquivo1)) != EOF)
    {
        fprintf(arquivo3,"%c",scanText);
    }
    while((scanText = fgetc(arquivo2)) != EOF)
    {
        fprintf(arquivo3,"%c",scanText);
    }



    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);
    return 0;
}

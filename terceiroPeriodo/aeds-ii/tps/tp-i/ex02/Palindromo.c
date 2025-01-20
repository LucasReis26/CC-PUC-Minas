#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ehPalindromo(char *word){
    int resp = 0;

    for(int i = 0, j = strlen(word) - 1; i < strlen(word); i++, j--){

        if(word[i] == word[j]){
            resp = 1;
        }else{
            i = strlen(word);
            resp = 0;
        }

    }

    return resp;
}

int main(){
    char word[255];

    fgets(word,255,stdin);
    word[strlen(word) - 1] = '\0';

    if(ehPalindromo(word)){
        printf("SIM\n");
    }else{
        printf("NÃO\n");
    }

    return 0;
}
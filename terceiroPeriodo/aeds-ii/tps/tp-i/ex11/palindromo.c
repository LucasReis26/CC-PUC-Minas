#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindromo(char *word, int i){
    int resp = 0;

    if(i > (strlen(word) / 2))
        resp = 1;
    else if(word[i] == word[strlen(word) - 1 - i])
        resp = isPalindromo(word, ++i);

    return resp;
}

int main(){
    char word[255];

    fgets(word,255,stdin);
    word[strlen(word) - 1] = '\0';

    if(isPalindromo(word,0)){
        printf("SIM\n");
    }else{
        printf("NÃO\n");
    } 

    return 0;
}
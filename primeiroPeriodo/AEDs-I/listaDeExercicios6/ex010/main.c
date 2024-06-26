#include <stdio.h>
#include <ctype.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    // Inicializa as variáveis de contagem
    *vogais = 0;
    *consoantes = 0;

    // Percorre a string até o caractere nulo (fim da string)
    while (*str != '\0') {
        // Converte o caractere para minúsculo para facilitar a comparação
        char ch = tolower(*str);

        // Verifica se o caractere é uma vogal ou consoante
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vogais)++;
        } else if ((ch >= 'a' && ch <= 'z')) {
            (*consoantes)++;
        }

        // Move para o próximo caractere
        str++;
    }
}

int main() {
    char string[100];
    int vogais, consoantes;

    // Solicita a entrada do usuário
    //printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    // Conta as vogais e consoantes
    contarVogaisConsoantes(string, &vogais, &consoantes);

    // Exibe o resultado
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}

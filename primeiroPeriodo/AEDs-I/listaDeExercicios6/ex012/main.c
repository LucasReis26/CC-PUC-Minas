#include <stdio.h>
#include <string.h>

// Função para trocar dois caracteres em uma string
void trocar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Função recursiva para gerar todas as permutações da string
void permutar(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s ", str); // Imprime a permutação
    } else {
        for (int i = inicio; i <= fim; i++) {
            // Troca o caractere atual com o caractere no índice 'inicio'
            trocar((str + inicio), (str + i));
            // Recursivamente gera as permutações para a substring restante
            permutar(str, inicio + 1, fim);
            // Desfaz a troca para restaurar a ordem original
            trocar((str + inicio), (str + i));
        }
    }
}

int main() {
    char str[100];

    // Solicita a entrada da string ao usuário
    //printf("Digite uma string: ");
    scanf("%s", str);

    printf("As permutações da string são:\n");
    permutar(str, 0, strlen(str) - 1);

    return 0;
}

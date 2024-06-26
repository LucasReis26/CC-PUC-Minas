#include <stdio.h>
#include <math.h>

// Estrutura para representar um termo de um polinômio
typedef struct {
    float coeficiente;
    int expoente;
    char constante;
    int constanteNum;
} Termo;

// Função para exibir o polinômio
void exibirPolinomio(Termo polinomio[], int n) {
    printf("f(x) = ");
    for (int i = 0; i < n; i++) {
        
        

        if(toupper(polinomio[i].constante) == 'S')
        {
            printf("%d",polinomio[i].constanteNum);
        }

        // Ignora termos com coeficiente 0
        if (polinomio[i].coeficiente == 0) return;

        // Exibe o coeficiente se diferente de 1 ou -1, ou se o expoente é 0
        if (fabs(polinomio[i].coeficiente) != 1 || polinomio[i].expoente == 0) {
            printf("%g", polinomio[i].coeficiente);
        }

        // Exibe o sinal negativo para coeficientes -1
        if (polinomio[i].coeficiente == -1 && polinomio[i].expoente != 0) {
            printf("-");
        }

        // Exibe a variável x e o expoente se maior que 1
        if (polinomio[i].expoente > 0 && toupper(polinomio[i].constante) == 'N') {
            printf("x");
        }
        if (polinomio[i].expoente > 1) {
            printf("^%d", polinomio[i].expoente);
        }

        // Adiciona o sinal de adição se não for o último termo
        if (i < n - 1 && toupper(polinomio[i].constante) == 'N') {
            printf(" + ");
        }
    }
    printf("\n");
}

// Função para calcular a derivada do polinômio
void derivadaPolinomio(Termo polinomio[], Termo derivada[], int n) {
    for (int i = 0; i < n; i++) {
        // A derivada de um termo constante é 0
        if (polinomio[i].expoente == 0 || toupper(polinomio[i].constante) == 'S') {
            derivada[i].coeficiente = 0;
            derivada[i].expoente = 0;
        } else {
            derivada[i].coeficiente = polinomio[i].coeficiente * polinomio[i].expoente;
            derivada[i].expoente = polinomio[i].expoente - 1;
        }
    }
}


int main() {
    // Solicita ao usuário o número de termos do polinômio
    int n;
    printf("Digite o número de termos do polinômio: ");
    scanf("%d", &n);

    // Solicita ao usuário os coeficientes e expoentes do polinômio
    Termo polinomio[n];
    for (int i = 0; i < n; i++) {
        printf("O termo %d é uma constante? (s ou n): ",i+1);
        scanf(" %c",&polinomio[i].constante);
        if(toupper(polinomio[i].constante) == 'S')
        {
            printf("Digite o numero da constante do termo %d: ",i+1);
            scanf("%d",&polinomio[i].constanteNum);
        }
        printf("Digite o coeficiente e o expoente do termo %d: ", i + 1);
        scanf("%f %d", &polinomio[i].coeficiente, &polinomio[i].expoente);
    }

    // Calcula a derivada
    Termo derivada[n];
    derivadaPolinomio(polinomio, derivada, n);

    // Exibe o polinômio
    exibirPolinomio(polinomio, n);

    // Exibe a derivada do polinômio
    printf("f'(x) = ");
    exibirPolinomio(derivada, n);

    return 0;
}

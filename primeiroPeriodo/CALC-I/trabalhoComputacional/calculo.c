#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

//Estrutura de
typedef struct TERMO{
  float coeficiente;
  float expoente;
  bool constante;
  float numConst;
  float resultFuncional;
} TERMO;



void insereTermos(TERMO polinomio[],int n)
{
  system("clear");

  char verificaConst;
  for(int i = 0; i < n; i++)
  {
    printf("O termo %d é uma constante? (S/N): ",i+1);
    scanf(" %c",&verificaConst);

    if(toupper(verificaConst) == 'S')
    {
      polinomio[i].constante = true;
    } else {
      polinomio[i].constante = false;
    }

    if(polinomio[i].constante == false)
    {
      printf("Digite o coeficiente do termo %d: ",i+1);
      scanf("%f",&polinomio[i].coeficiente);
      printf("Digite o expoente do termo %d: ",i+1);
      scanf("%f",&polinomio[i].expoente);
    } else {
      polinomio[i].coeficiente = 0;
      polinomio[i].expoente = 0;

      printf("Digite o valor da constante: ");
      scanf("%f",&polinomio[i].numConst);
    }
  }
}

void exibePolinomio(TERMO polinomio[],int n)
{
  system("clear");

  printf("f(x)= ");

  for(int i = 0; i < n; i++)
  {
    
    if(polinomio[i].constante == false)
    {

      if(polinomio[i].coeficiente == 0)
      {
        return;
      }

      //printa o sinal do segundo termo
      if (polinomio[i].coeficiente == 0) return;

      if(i > 0){
        if(polinomio[i].coeficiente < 0){        
          printf(" - ");
        }
        else 
          printf(" + ");  
      }

      // Exibe o coeficiente se diferente de 1 ou -1, ou se o expoente é 0
      if (fabs(polinomio[i].coeficiente) != 1 || polinomio[i].expoente == 0) {
          printf("%g",fabs(polinomio[i].coeficiente));
      }

      // Exibe o sinal negativo para coeficientes -1
      if (polinomio[i].coeficiente == -1 && polinomio[i].expoente != 0) {
          printf("-");
      }

      // Exibe a variável x e o expoente se maior que 1
      if (polinomio[i].expoente > 0) {
          printf("x");
      }
      if (polinomio[i].expoente > 1) {
          printf("^%g", polinomio[i].expoente);
      }

      // Adiciona o sinal de adição se não for o último termo
       
    }
    else
    {
        if(i > 0){
          if(polinomio[i].numConst < 0){        
            printf(" - ");
          }
          else 
            printf(" + ");  
        }

        printf("%g",fabs(polinomio[i].numConst));
    }
  }
}

void exibeDerivada(TERMO polinomio[],int n)
{

  printf("\n\nf'(x)= ");

  for(int i = 0; i < n; i++)
  {

    if(polinomio[i].constante == false)
    {

      if(polinomio[i].coeficiente == 0)
      {
        return;
      }

      
      if (polinomio[i].coeficiente == 0) return;

      if(i > 0){
        if(polinomio[i].coeficiente < 0){        
          printf(" - ");
        }
        else 
          printf(" + ");  
      }

      
      if (fabs(polinomio[i].coeficiente) != 1 || polinomio[i].expoente == 0) {
          printf("%g",fabs(polinomio[i].coeficiente));
      }

      
      if (polinomio[i].coeficiente == -1 && polinomio[i].expoente != 0) {
          printf("-");
      }

      
      if (polinomio[i].expoente > 0) {
          printf("x");
      }
      if (polinomio[i].expoente > 1) {
          printf("^%g", polinomio[i].expoente);
      }

      

    }
    else
    {
        if(i > 0){
          if(polinomio[i].numConst < 0){        
            printf(" - ");
          }
          else 
            printf(" + ");  
        }

        printf("%g",fabs(polinomio[i].numConst));
    }
  }
}

void derivaPolinomio(TERMO polinomio[],int n,TERMO derivada[])
{
  for(int i = 0; i < n; i++)
  {
    if(polinomio[i].expoente == 0 || polinomio[i].constante == true)
    {
      derivada[i].coeficiente = 0;
      derivada[i].expoente = 0;
    } else {
      derivada[i].coeficiente = polinomio[i].coeficiente * polinomio[i].expoente;
      derivada[i].expoente = polinomio[i].expoente - 1;
    }
  }
}

void calculaRetaTangente(int a, int fa, float derivas)
{
  float b = fa + (-1*(derivas*a));

  printf("y = %gx + %g\n\n",derivas,b);
}

void calculaFuncional(TERMO polinomio[],int n,TERMO derivada[])
{
  char simNao;
  
  float a, soma = 0,soma2 = 0;
  
  printf("\nQual o valor de a?: ");
  scanf("%f",&a);

  for(int i = 0; i < n; i++)
  {
    if(polinomio[i].constante == false)
    {
      polinomio[i].resultFuncional = polinomio[i].coeficiente * pow(a,polinomio[i].expoente);
    }
    else {
      polinomio[i].resultFuncional = polinomio[i].numConst;
    }

    soma += polinomio[i].resultFuncional;
  }

  for(int i = 0; i < n; i++)
  {
    if(polinomio[i].constante == false)
    {
      derivada[i].resultFuncional = derivada[i].coeficiente * pow(a,derivada[i].expoente);
    }

    soma2 += derivada[i].resultFuncional;
  }

  printf("\na = %g\tf(%g) = %g\tf'(%g) = %g\tP(%g,%g)",a,a,soma,a,soma2,a,soma);

  printf("\n\nDeseja calcular equação da reta tangente ao gráfico de f no ponto P(%g,%g)?",a,soma);

  scanf(" %c",&simNao);

  if(toupper(simNao) == 'S')
  {
    calculaRetaTangente(a,soma,soma2);
  } else
      return;
}

int main()
{
  system("clear");

  int n;
  char simNao;

  printf("Calculadora de Derivada!\n\n");
  printf("Deseja iniciar o programa? (S/N): ");
  scanf(" %c",&simNao);
  if(toupper(simNao) == 'S')
  {
    system("clear");
    
    printf("Digite o número de termos do seu polinomio: ");
    scanf("%d",&n);
  
    TERMO polinomio[n];
    TERMO derivada[n];
  
    insereTermos(polinomio,n);
  
    exibePolinomio(polinomio,n);
  
    derivaPolinomio(polinomio,n,derivada);
  
    exibeDerivada(derivada,n);
  
    printf("\n\nDeseja calcular valor funcional? (S/N): ");
    scanf(" %c",&simNao);
  
    if(toupper(simNao) == 'S')
    {
      calculaFuncional(polinomio,n,derivada);
    }
  
  }
  printf("-- PROGRAMA FINALIZADO --");
  
  
  return 0;
}
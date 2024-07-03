import sympy as sp
import os


def encontrar_raizes_e_raiz_enesima():
    while True:
        os.system("clear")
        # Recebe a função polinomial do usuário
        print("Digite a função polinomial em termos de x (ex: x^3 - 4*x + 1):")
        polinomio = input().strip()
        os.system("clear")
        # Substitui ^ por ** para permitir potências
        polinomio = polinomio.replace('^', '**')
        
        # Define o símbolo x
        x = sp.Symbol('x')
        
        try:
            # Cria a expressão simbólica do polinômio
            expr = sp.sympify(polinomio)
            
            # Calcula a derivada da função
            derivada = sp.diff(expr, x)
            
            # Substitui ** por ^ na expressão
            expr_str = str(expr).replace('**', '^')
            derivada_str = str(derivada).replace('**', '^')
            
            # Imprime a função e sua derivada
            print("\nFunção f(x):")
            print(expr_str)
            print("\nDerivada f'(x):")
            print(derivada_str)
            
            # Fase I: Isolamento dos intervalos que contêm as raízes
            print("\nFASE I - Isolamento dos intervalos que contêm as raízes:")
            intervalo_inicio = -10
            intervalo_fim = 10
            passo = 0.1
            xi = intervalo_inicio
            intervalos_com_raizes = []
            
            while xi <= intervalo_fim:
                xi_proximo = xi + passo
                f_xi = expr.subs(x, xi)
                f_xi_proximo = expr.subs(x, xi_proximo)
                
                if f_xi == 0:
                    print(f"Raiz encontrada no intervalo [{xi:.1f}, {xi:.1f}]")
                    intervalos_com_raizes.append((xi, xi))
                elif f_xi * f_xi_proximo < 0:
                    print(f"Raiz encontrada no intervalo [{xi:.1f}, {xi_proximo:.1f}]")
                    intervalos_com_raizes.append((xi, xi_proximo))
                
                xi = xi_proximo
            
            print(f"\nNúmero de possíveis raízes encontradas na Fase I: {len(intervalos_com_raizes)}")
            
            # Fase II: Refinamento das raízes usando o Método de Newton
            print("\nFASE II - Refinamento das raízes (Método de Newton):")
            raizes_encontradas = []
            
            for intervalo in intervalos_com_raizes:
                a, b = intervalo
                x0 = (a + b) / 2  # Escolhe x0 como o ponto médio do intervalo
                
                # Aplica o Método de Newton para refinar a raiz
                x_atual = x0
                max_iter = 100  # Número máximo de iterações
                tol = 1e-8      # Tolerância para convergência
                
                for i in range(max_iter):
                    f_x = expr.subs(x, x_atual)
                    deriv_f_x = sp.diff(expr, x).subs(x, x_atual)
                    
                    if abs(f_x) < tol:
                        break
                    
                    if deriv_f_x == 0:
                        print(f"A derivada é zero em x = {x_atual}. O método falhou.")
                        break
                    
                    x_proximo = x_atual - f_x / deriv_f_x
                    x_atual = x_proximo
                
                if i < max_iter - 1:
                    raizes_encontradas.append(x_atual)
                    print(f"Raiz refinada encontrada: x = {x_atual:.8f}")
                else:
                    print(f"Método de Newton não convergiu para o intervalo [{a}, {b}]")
            
            print(f"\nFASE III - Cálculo da raiz enésima de um número real positivo:")
            n = int(input("Digite o valor de n para a raiz enésima: "))
            k = float(input("Digite o valor de k (número real positivo): "))
            
            if n <= 0 or k < 0:
                print("n deve ser maior que zero e k deve ser um número real positivo.")
                continue

            # Define a função f(x) = x^n - k
            func_raiz = x**n - k
            
            # Aplica o Método de Newton para calcular a raiz enésima
            x0 = 1  # Primeira aproximação
            
            x_atual = x0
            max_iter = 100  # Número máximo de iterações
            tol = 1e-8      # Tolerância para convergência
            
            for i in range(max_iter):
                f_x = func_raiz.subs(x, x_atual)
                deriv_f_x = sp.diff(func_raiz, x).subs(x, x_atual)
                
                if abs(f_x) < tol:
                    break
                
                if deriv_f_x == 0:
                    print(f"A derivada é zero em x = {x_atual}. O método falhou.")
                    break
                
                x_proximo = x_atual - f_x / deriv_f_x
                x_atual = x_proximo
            
            if i < max_iter - 1:
                resultado_raiz = x_atual
                print(f"\nA raiz enésima de {k} com n = {n} é aproximadamente: {resultado_raiz:.8f}")
            else:
                print(f"\nMétodo de Newton não convergiu para calcular a raiz enésima de {k} com n = {n}.")
            
            # Pergunta se deseja calcular novamente
            resposta = input("\nDeseja inserir outra função? (s/n): ").strip().lower()
            if resposta != 's':
                break
        
        except sp.SympifyError as e:
            print(f"Erro ao processar a expressão: {e}")

if __name__ == "__main__":
    encontrar_raizes_e_raiz_enesima()

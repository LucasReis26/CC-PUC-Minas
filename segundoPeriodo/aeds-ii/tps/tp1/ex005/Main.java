import java.util.Scanner;

/*
	Lucas Teixeira Reis
	Algebra Booleana
	Trabalho Prático 1
*/

public class Main
{	
	//Método que retorna booleano
	public static boolean algebraBooleana (String expressao)
	{
		//Contador para contar as expressões
		int count = 0;
		//Alocando char pra guardar a expressao booleana
		char[] logica = new char[expressao.length()];
		
		//Percorre expressão procurando primeiro parentesis
		for (int i = 0; i < expressao.length(); i++)
		{
			if(expressao.charAt(i) == ')')
				count++;
		}

		for (int i = 0; i < expressao.length(); i++)
		{
			if(expressao.charAt(i) == '(')
				
		}

		System.out.println(count);

		return true;
	}

	public static void main (String[] args)
	{
		//Inicializando o Scanner
		Scanner sc = new Scanner(System.in);
		
		//Declarando variáveis
		String expressao = sc.nextLine();

		algebraBooleana(expressao);		
		

	}
}

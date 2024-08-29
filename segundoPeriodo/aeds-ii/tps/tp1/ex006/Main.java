import java.util.Scanner;

public class Main
{	
	//Método para verificar se uma string tem somente vogais
	public static boolean verificaVogais (String word)
	{	//Variáveis a serem utilizadas
		boolean resp = true;
		int count = 0;
		char[] wordChar = word.toCharArray();
		//Conta quantas vogais tem na palavra
		for (int i = 0; i < word.length(); i++)
		{
			if(Character.toUpperCase(wordChar[i]) == 'A'|| Character.toUpperCase(wordChar[i]) == 'E' || Character.toUpperCase(wordChar[i]) == 'I'||Character.toUpperCase(wordChar[i]) == 'O'||Character.toUpperCase(wordChar[i]) == 'U')
			{
				count++;
			}
		}
		//Se a quantidade de vogais que tiver na palavra for a quantidade de letras resp = true
		if (count == word.length())
			resp = true;
		else //Se a quantidade for menor então temos consoantes resp = false
			resp = false;
		//Retorna a resposta
		return resp;
	}
	//Método para verificar se uma string tem somente consoantes
	public static boolean verificaConsoante (String word)
	{
		//Variáveis a serem utilizadas
		boolean resp = true;
		int count = 0;
		char[] wordChar = word.toCharArray();
		//Conta quantas consoantes tem na palavra
		for (int i = 0; i < word.length(); i++)
		{
			if(Character.toUpperCase(wordChar[i]) == 'A'|| Character.toUpperCase(wordChar[i]) == 'E' || Character.toUpperCase(wordChar[i]) == 'I'||Character.toUpperCase(wordChar[i]) == 'O'||Character.toUpperCase(wordChar[i]) == 'U')
			{
				
			}
			else
			{
				if(!(wordChar[i] >= 48 && wordChar[i] <= 57))
					count++;
			}
		}
		//Se a quantidade de consoantes que tiver na palavra for a quantidade de letras resp = true
		if (count == word.length())
			resp = true;
		else //Se a quantidade for menor então temos vogais resp = false
			resp = false;
		//Retorna a resposta
		return resp;
	}

	public static boolean verificaInteiro (String word)
	{	//Variáveis a serem utilizadas
		boolean resp = true;
		int count = 0;
		char[] wordChar = word.toCharArray();
		//Conta quantos números tem na palavra
		for (int i = 0; i < word.length(); i++)
		{	//Se for número conte
			if(wordChar[i] >= 48 && wordChar[i] <= 57)
			{
				count++;
			}
		}
		//Se o contador for do tamanho da string, a string é um inteiro
		if (count == word.length())
			resp = true;
		else //Se a quantidade for menor, não é um inteiro
			resp = false;
		//Retorna a resposta
		return resp;
	}

	public static boolean verificaReal (String word)
	{
		//Variáveis a serem utilizadas
		boolean resp = true;
		int countDec = 0;
		int count = 0;
		char[] wordChar = word.toCharArray();
		//Conta quantos números tem na palavra
		for (int i = 0; i < word.length(); i++)
		{	//Se for número conte
			if((wordChar[i] >= 48 && wordChar[i] <= 57) || (wordChar[i] == 46) || (wordChar[i] == 44))
			{
				if(wordChar[i] == 46 || wordChar[i] == 44)
					countDec++;
				count++;
			}
		}
		//Se o contador for do tamanho da string, a string é um inteiro
		if (count == word.length() && countDec == 1)
			resp = true;
		else //Se a quantidade for menor, não é um inteiro
			resp = false;
		//Retorna a resposta
		return resp;
	}

	//Método para fazer as verificações necessárias na String e retornar a resposta
	public static void verificaString (String word)
	{
		boolean x1 = verificaVogais(word);
		boolean x2 = verificaConsoante(word);
		boolean x3 = verificaInteiro(word);
		boolean x4 = verificaReal(word);
		
		if (x1)
			System.out.print("SIM ");
		else
			System.out.print("NAO ");

		if (x2)
			System.out.print("SIM ");
		else
			System.out.print("NAO ");
		if (x3)
			System.out.print("SIM ");
		else
			System.out.print("NAO ");
		if (x4)
			System.out.println("SIM");
		else
			System.out.println("NAO");

	}

	public static void main (String[] args)
	{
		//Inicializando Scanner
		Scanner sc = new Scanner(System.in);

		//Criando variáveis para a resolução do exercício
		String word;
	
		//Criando loop até a palavra FIM para a realização do exercício
		do
		{
			//Scanneando String para a realização do exercício
			word = sc.nextLine();
		
			//Enviando para método de verificação, onde todos os procedimentos serão feitos
			if(!word.equals("FIM"))
				verificaString(word);
			
		} while (!word.equals("FIM"));
	}
}

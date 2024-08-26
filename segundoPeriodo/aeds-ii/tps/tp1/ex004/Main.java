import java.util.Scanner;
import java.util.Random;


public class Main
{
	//Método iterativo utilizado para o exercício
	public static String alteraString (String word,char letra1,char letra2)
	{

		//Criando um array de char para construir a String
		char[] word2 = new char[word.length()];

		//Alterando as letras
		for (int i = 0; i < word.length(); i++)
		{

			if (word.charAt(i) == letra1)
			{
				word2[i] = letra2;
			}
			else
			{
				word2[i] = word.charAt(i);
			}
		}

		return new String(word2);

	}

	public static void main (String[] args)
	{
		//Instanciando o Scanner e o random
		Scanner sc = new Scanner(System.in);
		Random rd = new Random();

		rd.setSeed(4);

		//Declarando variáveis para a realização do exercício
		String word;
		
		//Repetir até a palavra FIM
		do
		{
			//Gerando letras aleatórias
			char letra1 = (char) ('a' + (Math.abs(rd.nextInt())) % 26);
			char letra2 = (char) ('a' + (Math.abs(rd.nextInt())) % 26);
				
			//Leitura da String
			word = sc.nextLine();
			
			//Chama a função
			if (!word.equals("FIM"))
				System.out.println(alteraString(word,letra1,letra2));
		}
		while(!word.equals("FIM"));

		//Fechando o Scanner
		sc.close();
	}
}

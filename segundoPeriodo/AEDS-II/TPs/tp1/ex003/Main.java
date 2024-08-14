import java.util.*;

public class Main
{
	public static String ciframentoDeCezar (String word, int key)
	{
		String criptoWord = new StringBuilder();
		
		int tam = word.length();

		for(int i = 0; i < tam; i++)
		{
			criptoWord.charAt(i) =(char) word.charAt(i) + key;
		}

		return criptoWord.toString();
	}

	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);

		String word = sc.nextLine();
	
		int key = sc.nextInt();

		System.out.println(ciframentoDeCezar(word,key));
	}
}

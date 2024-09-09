import java.util.Scanner;

public class Main
{       
	public static boolean cmpstr (String word, String cmp)
	{

		boolean resp = false;
		int error = 0;

		if (word.length() == cmp.length())
		{
			for (int i = 0; i < word.length(); i++)
			{
				if (word.charAt (i) != cmp.charAt (i))
				{
					error++;
				}
				else
				{
					resp = true;
				}
			}
		}

		if (error > 0)
		{
			resp = false;
		}

		return resp;
	}
	public static String cifra (String word,char[] wordCifra, int key,int i)
	{
		if (word.charAt(i) < 32 || word.charAt(i) > 126)
		{
			wordCifra[i] = (char) word.charAt(i);
		}
		else
		{
			wordCifra[i] = (char) ((word.charAt(i) - 32 + key) % 95	+ 32);
		}

		String result = new String(wordCifra);

		return result;
	}

	public static String cifra (String word)
	{
		char[] wordCifra = new char[word.length()];

		return cifra (word, wordCifra, 3, 0);
	}

	public static void main (String[] args)
	{

		Scanner sc = new Scanner(System.in);

		String word = new String();

		while (!cmpstr(word,"FIM"))
		{
			word = sc.nextLine();

			if (!cmpstr(word,"FIM"))
			{
				System.out.println(cifra(word));
			}

		}
	}
}

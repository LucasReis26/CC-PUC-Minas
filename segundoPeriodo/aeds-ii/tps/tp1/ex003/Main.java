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
	public static String cifra (String word, int key)
	{
		char[] wordCifra = new char[word.length()];

		for (int i = 0; i < word.length(); i++)
		{
			if ((word.charAt(i) + key) <= 124)
				wordCifra[i] = (char) (word.charAt(i) + key);
			else
				wordCifra[i] = (char) (32 + ((word.charAt(i) + key) - 126));

		}

		String result = new String(wordCifra);

		return result;
	}

	public static String cifra (String word)
	{
		return cifra (word, 3);
	}

	public static void main (String[] args)
	{

		System.setProperty("file.encoding", "UTF-8");

		Scanner sc = new Scanner(System.in);

		String word = new String();

		while (!cmpstr(word,"FIM"))
		{
			word = sc.nextLine();

			if (!cmpstr(word,"FIM"))
			{
				MyIO.println(cifra(word));
			}
	
		}
	}
}

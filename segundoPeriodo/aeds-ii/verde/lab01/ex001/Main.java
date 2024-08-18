import java.util.Scanner;

public class Main
{
	public static int maimin (String word)
	{
		int contador = 0;

		for (int i = 0; i < word.length() ; i++)
		{
			if (Character.isUpperCase(word.charAt(i)))
			{
				contador++;
			}
		}

		return contador;
	}

	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);

		String word = new String();

		while (!word.equals("FIM"))
		{
			word = sc.nextLine();
			if (!word.equals("FIM"))
				System.out.println(maimin (word));
		}
	}
}

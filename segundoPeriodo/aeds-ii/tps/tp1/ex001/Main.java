import java.util.*;

public class Main
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);

		String word = "START";
		
		while (!word.equals("FIM"))
		{

			word = sc.nextLine();

			if(ehPalindromo(word))
			{
				System.out.println("SIM");
			}
			else
			{
				if (!word.equals("FIM"))
				{
					System.out.println("NAO");
				}
			}

		}

		sc.close();
	}

	public static boolean ehPalindromo (String word)
	{
		for(int i = 0; i < word.length()/2; i++)
		{
			if(word.charAt(i) != word.charAt(word.length() - 1 - i))
			{
				return false;
			}
		}

		return true;
	}
}

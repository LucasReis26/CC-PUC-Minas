import java.util.*;

public class Main
{

	public static boolean ehPalindromo (String word,int esq, int dir)
	{
		if(esq > dir) 
			return true;
		else if(word.charAt(esq) != word.charAt(dir))
			return false;
		else
			return ehPalindromo (word, esq+1, dir-1);
	}

	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);

		String word;

		do
		{
			word = sc.nextLine();

			if(ehPalindromo (word,0,word.length() - 1))
			{
				System.out.println("SIM");
			}
			else
			{
				if (!word.equals("FIM"))
					System.out.println("NAO");
			}
		} while (!word.equals("FIM"));
	}
}

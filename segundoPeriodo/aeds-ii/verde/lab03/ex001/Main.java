import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		int countOpen = 0, 
		    countClose = 0;

		String word;

		Scanner sc = new Scanner(System.in);

		do
		{

			word = sc.nextLine();

			if(!word.equals("FIM"))
			{

				for (int i = 0; i < word.length(); i++)
				{
					if (word.charAt(i) == '(')
						countOpen++;
					else if (word.charAt(i) == ')')
						countClose++;
				}

				if (countOpen == countClose)
					System.out.println("correto");
				else
					System.out.println("incorreto");
			}

		}
		while(!word.equals("FIM"));

	}
}

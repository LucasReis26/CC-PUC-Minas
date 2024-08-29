import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		int countOpen = 0, 
		    countClose = 0,
		    error = 0;

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
					{
						if (countOpen > countClose)
							countClose++;
						else
							error++;
					}
				}

				if (countOpen == countClose && error == 0)
					System.out.println("correto");
				else
					System.out.println("incorreto");
			}

			countOpen = 0;
			countClose = 0;

		}
		while(!word.equals("FIM"));

	}
}

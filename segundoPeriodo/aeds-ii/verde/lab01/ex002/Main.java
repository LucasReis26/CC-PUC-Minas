public class Main
{
	public static boolean comparaString (String word, String cmp)
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
	

	public static int contaMaiusculo (String word,int index)
	{
		if (index >= word.length())
		{
			return 0;
		}

		if (word.charAt(index) >= 'A' && word.charAt(index) <= 'Z')
		{
			return 1 + contaMaiusculo (word, index+1);
		}
		else
		{
			return contaMaiusculo (word, index+1);
		}
	}	

	public static int contaMaiusculo (String word)
	{
		return contaMaiusculo(word,0);
	}



	public static void main (String[] args)
	{

		String word = new String();

		while (!comparaString (word,"FIM"))
		{
			word = MyIO.readLine();
			
			if (!comparaString (word,"FIM"))
			{
				MyIO.println(contaMaiusculo(word));
			}
		}
	}
}

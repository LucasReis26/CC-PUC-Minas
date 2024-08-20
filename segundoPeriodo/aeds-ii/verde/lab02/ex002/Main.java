import java.util.*;

public class Main
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		//Declarando variáveis para o exercício;
		int num1,
		    num2;

		while(sc.hasNext())
		{
			//Realizando a leitura dos inteiros;
			num1 = sc.nextInt();
			num2 = sc.nextInt();
			
			//Printando o espelho;
			for (int i = num1; i <= num2; i++)
			{
				System.out.print(i);
			}
			for (int i = num2; i >= num1; i--)
			{
				if (i < 10)
					System.out.print(i);
				else if (i > 9 && i < 100)
				{
					System.out.print(i % 10);
					System.out.print(i / 10);
				}
				else if (i > 99 && i < 1000)
				{
					int capturaC = i/100,
				    	    capturaD = (i/10)%10,
				    	    capturaU = i % 10;


					System.out.print(capturaU);
					System.out.print(capturaD);
					System.out.print(capturaC);
				}
				else
				{
					int capturaM = i/1000,
					    capturaC = (i/100)%10,
					    capturaD = (i/10)%10 ,
					    capturaU = i % 10;

					System.out.print(capturaU);
					System.out.print(capturaD);
					System.out.print(capturaC);
					System.out.print(capturaM);   
				}
			}

			System.out.println();
		}

		sc.close();
	}
}

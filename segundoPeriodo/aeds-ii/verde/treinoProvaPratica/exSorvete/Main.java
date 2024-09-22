import java.util.Scanner;

public class Main
{

	public static void imprime(String faixaTrabalho)
	{

	

	}
	
	public static void injetaArray(int[] array, int U, int V, int count)
	{
		for(count; count < count + 2; count++)
		{
			if (count % 2 == 0)
				array[count] = U;
			else
				array[count] = V;
		}

	}

	public static void main (String[] args)
	{
		//Inicializando o Scanner
		Scanner sc = new Scanner(System.in);

		//Declarando variáveis para iniciar o exercício
		int P, S, U, V, count = 0;

		//Escaneando metros na praia e numero de sorveteiros
		P = sc.nextInt();
		S = sc.nextInt();

		while(S == 0 && P == 0)
		{
			int[] faixaTrabalho = new Int[S*2];

			for(int i = 0; i < S*2; i++)
			{
				U = sc.nextInt();
				V = sc.nextInt();

				injetaArray(faixaTrabalho,U,V,count);

				imprime(faixatrabalho);
			}

		}

		//Fechando o Scanner
		sc.close();
	}
}

/*Faça um programa que leia um número inteiro n indicando o número de
valores reais que devem ser lidos e salvos sequencialmente em um arquivo texto. Após a leitura
dos valores, devemos fechar o arquivo. Em seguida, reabri-lo e fazer a leitura de trás para frente
usando os métodos getFilePointer e seek da classe RandomAccessFile e mostre todos os valores
lidos na tela. Nessa questão, você não pode usar, arrays, strings ou qualquer estrutura de dados.
A entrada padrão é composta por um número inteiro n e mais n números reais. A saı́da padrão
corresponde a n números reais mostrados um por linha de saı́da.*/

import java.util.*;
import java.io.*;

public class Main
{
	public static void main (String[] args)
	{
		//Inicializando o Scanner, arquivo e writer
		Scanner sc = new Scanner(System.in);
		File arquivo = new File("arquivo.txt");
		FileWriter myWriter = new FileWriter("arquivo.txt");
		
		//Variáveis a serem utilizadas
		int num;
		float fileNum;

		//Captura numero n de valores reais que devem ser lidos
		num = sc.nextInt();
		
		//For para preencher o arquivo
		for(int i = 0; i < num; i++)
		{
			fileNum = sc.nextFloat();

			myWriter.write(String.format("%.2f",fileNum));
		}

		myWriter.close();
	}
}



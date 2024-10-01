import java.util.Scanner;
import java.io.RandomAccessFile;
import java.io.FileNotFoundException;

class Date
{
	private int dia;
	private int mes;
	private int ano;

	public Date()
	{
		this.dia = 0;
		this.mes = 0;
		this.ano = 0;
	}

	public Date(int dia, int mes, int ano)
	{
		this.dia = dia;
		this.mes = mes;
		this.ano = ano;
	}

	public void setDia(int dia)
	{
		this.dia = dia;
	}
	public int getDia()
	{
		return this.dia;
	}
	public void setMes(int mes)
	{
		this.mes = mes;
	}
	public int getMes()
	{
		return this.mes;
	}
	public void setAno(int ano)
	{
		this.ano = ano;
	}
	public int getAno()
	{
		return this.ano;
	}

	public void print()
	{
		System.out.println(this.dia + "/" + this.mes + "/" + this.ano);
	}
}

class Lista
{
	private String[] arrayString;
	private int first = 0;
	private int last = -1;

	public Lista(int num)
	{
		this.arrayString = new String[num];
	}

	public Lista()
	{
		this(50);
	}

	public void add(String word)
	{
		if(++last == arrayString.length)
			System.out.println("Lista sobrecarregada!");
		else
			this.arrayString[last] = word;
	}

	public void print()
	{
		for(int i = 0; i <= last; i++)
		{
			System.out.print("'" + this.arrayString[i]  + "'");
			if(i != last)
				System.out.print(", ");
		}
	}
}

class Pokemon
{
	private int id;
	private int generation;
	private String name;
	private String description;
	private Lista types;
	private Lista abilities;
	private Double weight;
	private Double height;
	private int captureRate;
	private boolean isLegendary;
	private Date captureDate;

	public Pokemon()
	{
		this.id = 0;
		this.generation = 0;
		this.name = "";
		this.description = "";
		this.types = new Lista(2);
		this.abilities = new Lista(10);
		this.weight = 0.0;
		this.height = 0.0;
		this.captureRate = 0;
		this.isLegendary = false;
		this.captureDate = new Date();
	}

	public void imprime()
	{
		String verdaFalso = "";

		if(isLegendary == true)
			verdaFalso = "true";
		else
			verdaFalso = "false";


		System.out.print("[#" + this.id + " -> " + this.name + ": " + this.description + " - " + "[" );
		this.types.print(); 
		System.out.print("]" + " - " + "["); 
		this.abilities.print();
		System.out.println( "]" + " - " + this.weight + "kg" + " - " + this.height + "m" + " - " + this.captureRate + "%" + " - " + this.generation + " gen] - " + this.captureDate.getDia() + "/" + this.captureDate.getMes() + "/" + this.captureDate.getAno());
	}
}

public class Main
{
	public static void main(String[] args) throws FileNotFoundException
	{
		Pokemon[] pokedex = new Pokemon[802];

		RandomAccessFile arquivo = new RandomAccessFile("/tmp/pokemon.csv","r");
		
		System.out.println("Está dando certo!");
	}
}

import java.util.Scanner;
import java.io.IOException;

class Celula{
	private Integer elemento;
	private Celula prox;

	//Construtores
	public Celula(){
		this(0);
	}
	public Celula(Integer elemento){
		this.elemento = elemento;
		this.prox = null;
	}

	//Métodos
	public Integer getElemento(){
		return this.elemento;
	}
	public void setElemento(Integer elemento){
		this.elemento = elemento;
	}
	public Celula getProx(){
		return this.prox;
	}
	public void setProx(Celula prox){
		this.prox = prox;
	}
}

class Pilha{
	private Celula topo;

	//Construtores
	public Pilha(){
		this.topo = null;
	}

	//Métodos
	public void inserir(Integer x){
		Celula tmp = new Celula(x);
		tmp.setProx(topo);
		this.topo = tmp;
		tmp = null;
	}

	//Exercício 05
	public void mostrar(){
		if(this.topo != null){
			System.out.print("[ ");
			mostrar(this.topo);
		}else{
			System.out.println("[  ]");
		}
	}
	private void mostrar(Celula i){
		if(i.getProx() == null){
			System.out.println(i.getElemento() + " ]");
		}else{
			System.out.print(i.getElemento() + ", ");
			mostrar(i.getProx());
		}
	}
	//Exercício 06
	public void mostrarInvertido(){
		if(this.topo != null){
			System.out.print("[ ");
			mostrarInvertido(this.topo);
		}else{
			System.out.println("[  ]");
		}
	}
	private void mostrarInvertido(Celula i){
		if(i.getProx() == null){
			System.out.print(i.getElemento() + ", ");
		}else{
			mostrarInvertido(i.getProx());
			if(i.getProx().getProx() == null)
				System.out.print(i.getElemento() + ", ");
			else
				System.out.println(i.getElemento() + " ]");
		}
	}
	//Exercício 07
	public void mostrarInvertidoIter(){
		mostrarInvertidoIter(this.topo);
	}
	private void mostrarInvertidoIter(Celula i){
		int maior = i.getElemento();
		System.out.print("[ ");
		Pilha tmp = new Pilha();
		for(Celula j = i; j != null; j = j.getProx()){
			tmp.inserir(j.getElemento());	
		}
		for(Celula j = tmp.getTopo(); j != null; j = j.getProx()){
			if(j.getProx() != null)
				System.out.print(j.getElemento() + ", ");
			else
				System.out.print(j.getElemento());
		}
		System.out.println(" ]");
	}


	//Exercício 01
	public Integer somarIte(){
		int soma = 0;
		for(Celula i = this.topo; i != null; i = i.getProx()){
			soma += i.getElemento();
		}
		return soma;
	}

	//Exercício 02
	public Integer somar(){
		if(this.topo == null){
			return 0;
		}else{
			return somar(this.topo);
		}
	}
	private Integer somar(Celula i){
		int soma = 0;
		if(i.getProx() == null){
			soma = i.getElemento();
		} else {
			soma = i.getElemento() + somar(i.getProx());
		}
		return soma;
	}

	//Exercício 03
	public Integer getMaior(){
		if(this.topo != null){
			Integer maior = this.topo.getElemento();

			for(Celula i = this.topo.getProx(); i != null; i = i.getProx()){
				if(i.getElemento() > maior){
					maior = i.getElemento();
				}
			}

			return maior;
		} else {
			return 0;
		}
	}

	//Exercício 04
	public Integer getMaiorRecur(){
		if(this.topo != null){
			return getMaiorRecur(this.topo);
		}
		return 0;
	}
	public Integer getMaiorRecur(Celula i){
		if(i != null){
			Integer maior = getMaiorRecur(i.getProx());

			if(i.getElemento() > maior){
				return i.getElemento();
			}else if(maior > i.getElemento()){
				return maior;
			}else{
				return i.getElemento();
			}
		}else{
			return Integer.MIN_VALUE;
		}
	}

	//Get && Set
	public Celula getTopo(){
		return this.topo;
	}
}

public class Main{
	public static void limpaTela(){
		for(int i = 0; i < 50; i++){
			System.out.println();
		}
		System.out.print("\033[H");
	}
	public static void main(String[] args) throws IOException{
		limpaTela();
		Scanner sc = new Scanner(System.in);
		Integer op = null;
		Pilha pilha = new Pilha();
		do{
			System.out.println("Vamos utilizar uma Pilha!");
			System.out.println("\nEscolha uma opção: ");
			System.out.println("\n1 - Inserir Elemento");
			System.out.println("2 - Mostrar Elementos");
			System.out.println("3 - Mostrar Elementos Invertidos");
			System.out.println("4 - Mostrar Elementos Invertidos Iterativo");
			System.out.println("5 - Somar Elementos Recursivamente");
			System.out.println("6 - Somar Elementos Iterativamente");
			System.out.println("7 - Mostrar Maior Elemento Iterativo");
			System.out.println("8 - Mostrar Maior Elemento Recursivo");
			System.out.println("0 - Sair");
			System.out.print("\nSua opção: ");
			op = sc.nextInt();
			sc.nextLine();
			switch(op){
				case 1:
					limpaTela();
					System.out.println("\n-- Inserindo Elemento --");
					System.out.print("Digite o elemento para inserir: ");
					pilha.inserir(sc.nextInt());
					System.out.println();
					limpaTela();
					break;
				case 2:
					limpaTela();
					System.out.println("\n-- Mostrando Elementos --");
					pilha.mostrar();
					System.out.println();
					System.out.print("Aperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 3:
					limpaTela();
					System.out.println("\n-- Mostrando Elementos --");
					pilha.mostrarInvertido();
					System.out.println();
					System.out.print("Aperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 4:
					limpaTela();
					System.out.println("\n-- Mostrando Elementos --");
					pilha.mostrarInvertidoIter();
					System.out.println("\nAperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 5:
					limpaTela();
					System.out.println("\n-- Somando Elementos --");
					System.out.println("A soma dos elementos é: "+ pilha.somar());
					System.out.println();
					System.out.print("Aperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 6:
					limpaTela();
					System.out.println("\n-- Somando Elementos --");
					System.out.println("A soma dos elementos é: " + pilha.somarIte());
					System.out.println();
					System.out.print("Aperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 7:
					limpaTela();
					System.out.println("\n-- Mostrando Maior Elemento --");
					System.out.println("O maior elemento da Pilha é: " + pilha.getMaior());
					System.out.println("\nAperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 8:
					limpaTela();
					System.out.println("\n-- Mostrando Maior Elemento --");
					System.out.println("O maior elemento da Pilha é: " + pilha.getMaiorRecur());
					System.out.println("\nAperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 0:
					limpaTela();
					break;
			}
		}while(op != 0);
		
	}
}

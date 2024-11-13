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

	public void mostrar(){
		System.out.print("[ ");
		mostrar(this.topo);
	}
	private void mostrar(Celula i){
		if(i.getProx() == null){
			System.out.println(i.getElemento() + " ]");
		}else{
			System.out.print(i.getElemento() + ", ");
			mostrar(i.getProx());
		}
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
	

	//Get && Set
	public Celula getTopo(){
		return this.topo;
	}
}

public class Main{
	public static void limpaTela(){
		System.out.print("\033[H\033[2J");
	}
	public static void main(String[] args) throws IOException{
		Scanner sc = new Scanner(System.in);
		Integer op = null;
		Pilha pilha = new Pilha();
		do{
			System.out.println("Vamos utilizar uma Pilha!");
			System.out.println("\nEscolha uma opção: ");
			System.out.println("\n1 - Inserir Elemento");
			System.out.println("2 - Mostrar Elementos");
			System.out.println("3 - Somar Elementos Recursivamente");
			System.out.println("4 - Somar Elementos Iterativamente");
			System.out.println("5 - Mostrar Maior Elemento");
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
					System.out.println("\n-- Somando Elementos --");
					System.out.println("A soma dos elementos é: "+ pilha.somar());
					System.out.println();
					System.out.print("Aperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 4:
					limpaTela();
					System.out.println("\n-- Somando Elementos --");
					System.out.println("A soma dos elementos é: " + pilha.somarIte());
					System.out.println();
					System.out.print("Aperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
				case 5:
					limpaTela();
					System.out.println("\n-- Mostrando Maior Elemento --");
					System.out.println("O maior elemento da Pilha é: " + pilha.getMaior());
					System.out.println("\nAperte ENTER para continuar...");
					sc.nextLine();
					limpaTela();
					break;
			}
		}while(op != 0);
		
	}
}

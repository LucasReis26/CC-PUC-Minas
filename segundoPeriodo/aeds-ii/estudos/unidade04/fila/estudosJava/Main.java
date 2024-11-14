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

	//Get && Set
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

class Fila{
	private Celula primeiro, ultimo;

	//Construtores
	public Fila(){
		this.primeiro = new Celula();
		this.ultimo = primeiro
	}

	//Métodos
	public Void inserir(Integer x){
		this.ultimo.setProx(new Celula(x));
		this.ultimo = this.ultimo.getProx();
		this.ultimo.setProx(null);
	}
	public Integer remover(){
		if(primeiro == ultimo)
		Celula tmp = this.primeiro.getProx();
		this.primeiro = this.primeiro.getProx().getProx();
		Integer elemento = tmp.getElemento();
		tmp.setProx(null);
		tmp = null;
		return elemento;
	}
	public void mostrar(){
		if(primeiro == ultimo){
			throw new Exception("Erro!");
			return;
		}else{
			mostrar(this.primeiro);
		}
	}	
	private void mostrar(Celula i){
		
	}
}

public class Main{
	public static void main(String[] args) throws IOException{
		
	}
}

package ex10;

import java.util.Scanner;

public class Palindromo{
    public static boolean isPalindromo(String word, int i){
        boolean resp = false;

        if(i > (word.length() / 2)) 
            resp = true;
        else if(word.charAt(i) == word.charAt(word.length() - 1 - i))
            resp = isPalindromo(word, ++i);

        return resp;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String word = sc.nextLine();

        if(isPalindromo(word,0))
            System.out.println("SIM");
        else
            System.out.println("NÃO");

        sc.close();
    }
}
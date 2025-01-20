package ex01;

import java.util.Scanner;

public class Palindromo{

    static Boolean ehPalindromo(String word){

        Boolean resp = false;

        for(int i = 0, j = word.length() - 1; i < word.length(); i++, j--){
            if(word.charAt(i) == word.charAt(j)){
                resp = true;
            }else{
                i = word.length();
                resp = false;
            }
        }

        return resp;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String word = sc.nextLine();

        if(ehPalindromo(word)){
            System.out.println("SIM");
        }else{
            System.out.println("NÃO");
        }

        sc.close();        
    }
}
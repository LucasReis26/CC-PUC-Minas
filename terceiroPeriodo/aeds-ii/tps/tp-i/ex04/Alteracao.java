package ex04;

import java.util.Scanner;
import java.util.Random;

public class Alteracao{
    static String alteraLetra(String word, char first, char second){

        char[] wordChar = new char[word.length()];

        for(int i = 0; i < wordChar.length; i++){
            if(word.charAt(i) == first){
                wordChar[i] = second;
            }else{
                wordChar[i] = word.charAt(i);
            }
        }

        String resp = new String(wordChar);

        return resp;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String word = sc.nextLine();
        
        Random gerador = new Random();

        gerador.setSeed(4);

        char first = ((char) ('a' + (Math.abs(gerador.nextInt()) % 26)));
        
        char second = ((char) ('a' + (Math.abs(gerador.nextInt()) % 26)));

        System.out.println(alteraLetra(word, first, second));

        sc.close();
    }
}
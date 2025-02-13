package ex03;

import java.util.Scanner;

public class Ciframento{
    
    public static String cifra(String word){
        char[] wordChar = new char[word.length()];

        for(int i = 0; i < word.length(); i++){
           wordChar[i] = (char) (word.charAt(i) + 3); 
        }
        
        String wordCifra = new String(wordChar);

        return wordCifra;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String word = sc.nextLine();

        String wordCifra = cifra(word);
        
        System.out.println(wordCifra);

        sc.close();
    }
}

package ex12;

import java.util.Scanner;

public class Cifra {
    public static void cifraRec(char[] wordChar, int i){
        if(i >= wordChar.length)
            return;
        else{
            wordChar[i] = (char) (wordChar[i] + 3);
            cifraRec(wordChar, ++i);
        }
        return;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String word = sc.nextLine();

        char[] charWord = word.toCharArray();

        cifraRec(charWord, 0);

        String newString = new String(charWord);

        System.out.println(newString);

        sc.close();
    }
}

package ex06;

import java.util.Scanner;

public class Is{
    //Método para verificar se a String é um número real
    static boolean isReal(String word) {
        boolean resp = false;
        Integer decimalPoint = 0;
        for(int i = 0; i < word.length(); i++){
            if(word.charAt(i) >= '0' && word.charAt(i) <= '9' || word.charAt(i) == '.' || word.charAt(i) == ','){
                if(word.charAt(i) == '.' || word.charAt(i) == ',')
                    decimalPoint++;
                resp = true;
            }
            else{
                i = word.length();
                resp = false;
            }
        }
        if(resp && decimalPoint == 1)
            resp = true;
        else
            resp = false;
        return resp;
    }
    //Método para verificar se a String é um número inteiro
    static boolean isInteiro(String word){
        boolean resp = false;
        for(int i = 0; i < word.length(); i++){
            if(word.charAt(i) >= '0' && word.charAt(i) <= '9')
                resp = true;
            else{
                i = word.length();
                resp = false;
            }
        }
        return resp;
    }
    //Método para verificar se a String é composta somente por consoantes
    static boolean isConsoante(String word){
        char[] vogais = {'a','e','i','o','u'};
        boolean resp = false;

        for(int i = 0; i < word.length(); i++){
            for(int j = 0; j < vogais.length; j++){
                if(Character.toLowerCase(word.charAt(i)) != vogais[j] && (Character.toLowerCase(word.charAt(i)) >= 'a' && Character.toLowerCase(word.charAt(i)) <= 'z')){
                    resp = true;
                }else{
                    j = vogais.length;
                    resp = false;
                } 
            }
            if(resp == false){
                i = word.length();
            } 
        }

        return resp;
    }
    //Método para verificar se a String é composta somente por vogais
    static boolean isVogal(String word){
        char[] vogais = {'a','e','i','o','u'};
        boolean resp = false;

        for(int i = 0; i < word.length(); i++){
            for(int j = 0; j < vogais.length; j++){
                if(Character.toLowerCase(word.charAt(i)) == vogais[j]){
                    j = vogais.length;
                    resp = true;
                }else{
                    resp = false;
                } 
            }
            if(resp == false){
                i = word.length();
            } 
        }

        return resp;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        if(isVogal(word)){
            System.out.print("SIM;");
        }else{
            System.out.print("NÃO;");
        }
        if(isConsoante(word)){
            System.out.print(" SIM;");
        }else{
            System.out.print(" NÃO;");
        }
        if(isInteiro(word)){
            System.out.print(" SIM;");
        }else{
            System.out.print(" NÃO;");
        }
        if(isReal(word)){
            System.out.println(" SIM;");
        }else{
            System.out.println(" NÃO;");
        }

        sc.close();
    }
}
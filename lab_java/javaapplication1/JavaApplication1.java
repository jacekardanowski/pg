package javaapplication1;
import java.util.Scanner;
public class JavaApplication1 {
    
    public static void main(String[] args) {
        Scanner inputScanner = new Scanner(System.in);
        System.out.println("Jak masz na imie?");
        String imie = inputScanner.nextLine();
        System.out.println("Witaj "+imie+"!");
    }
    
}

import java.util.Scanner;

public class Main {


    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);


        int a = reader.nextInt();
        int i = 0;
        while (i<a) {
            int b = reader.nextInt();
            int c = reader.nextInt();
            if (b == c) {
                System.out.println("=");
            }else if(b>c){
                System.out.println(">");

            }else{
                System.out.println("<");
            }
            i++;
        }
    }
}
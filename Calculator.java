
import java.util.Scanner;
public class Calculator {
    public static void main(String[]args){
char button;
Scanner sc = new Scanner(System.in);
System.out.println("Enter your first number");
int x =sc.nextInt();
System.out.println("Enter your second number");
int y =sc.nextInt();

        System.out.println("case +: addition\ncase - : Substraction\ncase * : Multiplication\ncase / : division\nchose case");
button= sc.next().charAt(0);
        //        int button =sc.nextInt();
        switch(button){
            case '+' : System.out.println(x+y);
                    break;
            case '-' :System.out.println(x-y);
                    break;
            case '*' : System.out.println(x*y);
                    break;
            case '/' : System.out.println(x/y);
            break;

            default:System.out.println("Invalid");
        }
    }
}

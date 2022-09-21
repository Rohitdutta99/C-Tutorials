import java.util.Scanner;
import java.lang.String;
public class nameprint
{
    public static void printname(String name)
    {
        System.out.println("Hello "+name);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        printname(name);
    }
}
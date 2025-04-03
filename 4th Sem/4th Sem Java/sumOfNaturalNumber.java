import java.util.Scanner;
public class sumOfNaturalNumber {
    public static void main(String[] args) {
        System.out.print("Enter the number of natural number : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;


        
        // sum of natural number
        for(int i = 0; i <= n; i++)
        {
            sum += i;
        }
        System.out.println("The sum of first " + n + " natural number is (" + sum + ")");

        // sum of even number
        int sum1 = 0;
        for(int i = 0; i <= n; i =  i + 2)
        {
            sum1 += i;
        }
        System.out.println("The sum of even numbers of first " + n + " natural number is (" + sum1 + ")");

        // sum of odd number
        int sum2 = 0;
        for(int i = 1; i <= n; i =  i + 2)
        {
            sum2 += i;
        }
        System.out.println("The sum of even numbers of first " + n + " natural number is (" + sum2 + ")");
    }
}

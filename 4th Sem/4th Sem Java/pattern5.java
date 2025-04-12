// * * * * * 
// * * * * 
// * * * 
// * * 
// *

import java.util.Scanner;
public class pattern5 {
    public static void main(String args[])
    {
        System.out.println("Enter the size of the pattern 5 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n - i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

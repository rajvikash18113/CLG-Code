// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

import java.util.Scanner;
public class pattern1 {
    public static void main(String args[])
    {
        System.out.println("Enter the Size of the pattern 2 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

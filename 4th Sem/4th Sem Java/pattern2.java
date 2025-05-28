// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

import java.util.Scanner;
public class pattern2 {
    public static void main(String args[])
    {
        System.out.println("Enter the size of the pattern 2 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
// 

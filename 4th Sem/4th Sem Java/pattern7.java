//     *
//    ***
//   *****
//  *******
// *********

import java.util.Scanner;
public class pattern7 {
    public static void main(String args[])
    {
        System.out.println("Enter the size of the pattern 7 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n - i; j++)
            {
                System.out.print(" ");
            }
            for(int j = 1; j <= (2 * i) - 1; j++)
            {
                System.out.print("*");
            }
            // for(int j = 1; j <= n - i; j++)
            // {
            //     System.out.print(" ");
            // }
            System.out.println();    
        }
    }
}

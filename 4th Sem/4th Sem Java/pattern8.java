// *********
//  *******
//   *****
//    ***
//     *

import java.util.Scanner;

public class pattern8 {
    public static void main(String args[]) {
        System.out.println("Enter the size of the pattern 8 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // 1st Method

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }
            for(int k = 1; k <= (2 * n) - (2 * i - 1); k++)
            {
                System.out.print("*");
            }

            System.out.println();
        }

        // 2nd Method

        // for(int i = 1; i <= n; i++)
        // {
        // for(int j = 1; j <= (2 * n) - 1; j++ )
        // {

        // if(j >= i && j <= (2 * n) - i)
        // {
        // System.out.print("*");
        // }
        // else
        // {
        // System.out.print(" ");
        // }

        // // System.out.print((j >= i && j <= (2 * n) - i) ? "*" : " ");
        // }
        // System.out.println();
        // }

    }
}
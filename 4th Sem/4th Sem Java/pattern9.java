//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

import java.util.Scanner;
public class pattern9 {
    public static void main(String[] args) {
        System.out.println("Enter the size of the pattern 9 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // to print the upper half of the diamond pattern
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
            System.out.println();
        }

        // to print the lower half of the dimaond pattern
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                System.out.print("-");
            }
        }

    }
}

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

import java.util.Scanner;
public class pattern6 {
    public static void main(String args[])
    {
        System.out.println("Enter the size of the Pattern 6 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j <= n - i; j++)
            {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}

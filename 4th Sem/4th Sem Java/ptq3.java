// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 

import java.util.Scanner;
public class ptq3 {
    public static void main(String[] args) {
        System.out.println("Enter the size of the ptq3 : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int start = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            start = 0;
            else
            start = 1;
    
            for (int j = 1; j <= i; j++)
            {
                System.out.print(start + " ");
                start = 1 - start;
            }
            System.out.println();
        }
    }
           
}


                




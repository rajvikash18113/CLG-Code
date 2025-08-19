import java.util.Scanner;
public class find_element
{
	public static void main(String[] args) {
	    int target;
		Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];

        System.out.println("Enter 10 elements : ");
        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter Target Element : ");
        target = sc.nextInt();

        for (int i = 0; i < 10; i++) {
            if(arr[i] == target){
                System.out.println("Element present at Index : " + i);
            }
        }
        
	}
}

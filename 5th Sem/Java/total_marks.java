import java.util.Scanner;
public class total_marks
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        int[] marks = new int[5];

        System.out.println("Enter marks of 5 subjects:");
        for (int i = 0; i < 5; i++) {
            marks[i] = sc.nextInt();
        }

        int sum = 0;
        System.out.println("Marks of Subjects are:");
        for (int i = 0; i < 5; i++) {
            System.out.println(marks[i]);
            sum += marks[i];
        }
        System.out.println("Total Marks ->" + sum);
	}
}
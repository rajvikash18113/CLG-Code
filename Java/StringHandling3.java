public class StringHandling3 {
    public static void main(String[] args) {
        String s1 = "Hello";
        String s2 = "hello";
        String s3 = "Hello";

        System.out.println(s1.compareTo(s2));
        System.out.println(s2.compareTo(s1));
        System.out.println(s3.compareTo(s1));       

    }
}

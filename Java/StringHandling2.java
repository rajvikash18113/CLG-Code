public class StringHandling2 {
    public static void main(String[] args) {
        String s1 = "Hello";
        String s2 = "Hello";
        String s3 = new String("Hello");

        System.out.println(s1 == s2);
        System.out.println(s2 == s3);
        System.out.println(s1.equals(s2));
        System.out.println(s2.equals(s3));
    }
}


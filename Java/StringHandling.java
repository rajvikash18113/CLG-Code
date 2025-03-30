public class StringHandling {
    public static void main(String[] args) {
        String s = "This is an apple";
        
        // this will return the length of the string
        System.out.println(s.length()); 

        // this will return the character present at given index
        System.out.println(s.indexOf('a'));
        System.out.println(s.charAt(5)); 
        System.out.println(s.indexOf('z'));
        System.out.println(s.lastIndexOf('a'));
        System.out.println(s.toUpperCase());
        System.out.println(s.toLowerCase());
        System.out.println(s.equals("Hello"));
        System.out.println(s.equalsIgnoreCase("Hello"));
        System.out.println(s.contains("apple"));
        System.out.println(s.startsWith("This"));
        System.out.println(s.endsWith("apple"));
    }
}

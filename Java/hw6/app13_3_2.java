
public class app13_3_2 {
    public static void main(String[] args) {
        int a = 4, b = 0;

        try {
            System.out.println(a + "/" + b + "=" + a / b);
        } catch (ArithmeticException e) {
            System.out.println("exception = " + e);
        }
    }
}

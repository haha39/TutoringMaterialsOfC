public class app13_4 {
    public static int divide(int a, int b) throws ArithmeticException {
        int c;
        c = a / b;
        System.out.println(a + "/" + b + "=" + c);

        return c;
    }

    public static void main(String[] args) {
        int a = 4, b = 0;

        try {
            int d = divide(a, b);
        } catch (ArithmeticException e) {
            System.out.println("exception = " + e);
        }
    }
}

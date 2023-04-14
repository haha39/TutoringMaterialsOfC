public class app13_4 {
    public static void divide(int a, int b) throws AbstractMethodError {
        int c;
        c = a / b;
        System.out.println(a + "/" + b + "=" + c);

    }

    public static void main(String[] args) {
        int a = 4, b = 0;

        try {
            divide(a, b);
        } catch (ArithmeticException e) {
            System.out.println("exception = " + e);
        }
    }
}

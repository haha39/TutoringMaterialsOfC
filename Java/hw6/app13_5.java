class Ctest {
    public static int divide(int a, int b) throws ArithmeticException {
        int c;
        c = a / b;
        System.out.println(a + "/" + b + "=" + c);

        return c;
    }
}

public class app13_5 {
    public static void main(String[] args) {
        int a = 4, b = 0;

        try {
            Ctest.divide(a, b);
        } catch (ArithmeticException e) {
            System.out.println("exception = " + e);
        }
    }
}

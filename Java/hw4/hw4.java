public class hw4 {
    // define num
    int num;

    // method for recursive Factorial
    public int Factorial(int n) {
        if (n <= 0) {
            return 1;
        }
        return n * Factorial(n - 1);
    }

    // method for gcd
    public int GCD(int n, int m) {
        if (n % m == 0)
            return m;
        else
            return GCD(m, n % m);
    }

    void show(int a) {
        System.out.println("Factorial of " + a + " : ");
        System.out.println(Factorial(a));
    }

    void show(int a, int b) {
        int ans;

        if (b >= a) {
            ans = GCD(b, a);
        } else {
            ans = GCD(a, b);
        }
        System.out.println("GCD of " + a + " and " + b + " :");
        System.out.println(ans);
    }

    public static void main(String[] args) {
        hw4 hw4 = new hw4();
        hw4.num = 10;

        hw4.show(hw4.num);
        hw4.show(hw4.num, 8);
    }
}

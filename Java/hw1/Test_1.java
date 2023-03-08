import java.util.Scanner;
import java.util.Random;
/*homework_1 */

public class Test_1 {
    public static void main(String[] args) {
        int scn, quo, rem; // quo for quotient, rem for remainder
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("50$ each time");
            System.out.println("enter 0 : no money, break while");
            System.out.println("other input will greeting your mother");
            System.out.println("please enter your money : ");

            scn = scanner.nextInt();

            if (scn != 0) {
                quo = scn / 50;
                rem = scn % 50;

                if (rem == 0 && quo > 0) {
                    for (int i = 0; i < quo; i++) {
                        Random random = new Random();
                        int ran = random.nextInt(101);

                        if (ran <= 60) {
                            System.out.println("*R*");
                        } 
                        else if (ran < 99 && ran > 60) {
                            System.out.println("*SR*");
                        } 
                        else {
                            System.out.println("*SSR!!!*");
                        }
                    }
                    System.out.println("\n");
                } 
                else {
                    System.out.println("Kan lin-nia G8\n\n");
                }
            } 
            else {
                System.out.println("ola ola ola, go rub a bank\n\n");
                break;
            }
        }

        System.out.println("thanks for coming\n\n");

        scanner.close();
    }
}

package hw2.Question1;

import java.util.Scanner;

public class hw2_q1 {
    public static void main(String[] args) {
        int scn, wen, ren;
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("please enter 0-4");
            System.out.println("0 : break while, 1 : dinner");
            System.out.println("2 : take a walk, 3 : bathroom");

            scn = scanner.nextInt();

            if (scn == 0) {
                System.out.println("the end!!");
                break;
            } else if (scn == 1) {
                System.out.println("please wen's money");
                wen = scanner.nextInt();
                System.out.println("please ren's money");
                ren = scanner.nextInt();

                dinner(wen, ren);
            } else if (scn == 2) {
                System.out.println("1 : wen ok, 0 : wen not ok");
                wen = scanner.nextInt();
                System.out.println("1 : ren ok, 0 : ren not ok");
                ren = scanner.nextInt();

                stroll(wen, ren);
            } else {
                System.out.println("1 : wen ok, 0 : wen not ok");
                wen = scanner.nextInt();
                System.out.println("1 : ren ok, 0 : ren not ok");
                ren = scanner.nextInt();

                bathroom(wen, ren);
            }
            System.out.println();
            System.out.println();
        }
        scanner.close();

    }

    public static void dinner(int wen, int ren) {
        // AND
        if (wen != 0 && ren != 0) {
            System.out.println("甲奔 gogo");
        } else {
            System.out.println("沒錢吃晚餐嗚嗚");
        }
    }

    public static void stroll(int wen, int ren) {
        // OR
        if (wen == 1 || ren == 1) {
            System.out.println("來散步，看要公園還是學校");
        } else {
            System.out.println("好懶,來打bro好了");
        }
    }

    public static void bathroom(int wen, int ren) {
        // XOR
        if ((wen == 0 && ren == 1)) {
            System.out.print(ren);
            System.out.println("要上廁所");
        } else if ((wen == 1 && ren == 0)) {
            System.out.print(ren);
            System.out.println("要上廁所");
        } else {
            System.out.println("都不要上廁所");
        }
    }
}

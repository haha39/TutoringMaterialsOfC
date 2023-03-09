import java.util.Scanner;

public class hw2_q2 {
    public static void main(String[] args) {
        int A[][], B[][];

        A = new int[4][4]; // 奇數輪
        B = new int[4][4]; // 偶數輪
        Scanner scanner = new Scanner(System.in);
        System.out.println("please input x :");
        int x = scanner.nextInt();
        System.out.println("please input y :");
        int y = scanner.nextInt();
        int round = 0;
        // 第0輪
        A[y][x] = 1;
        System.out.println("round : " + round);
        show(A);

        // 後面幾輪
        while (true) {
            round++;
            if (round % 2 == 1) { // 奇數輪
                if (ifFull(A) == true) { // 滿了
                    break;
                }
                System.out.println("round : " + round);

                // 對16格做一樣的判斷
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (A[i][j] == 1) { // 如果A陣列格子有細胞 -> 才處理B陣列
                            // 上層三個鄰居(i-1)
                            if (i - 1 >= 0) { // 不會超出上面界線
                                B[i - 1][j] = 1; // 上面鄰居為1
                                if (j - 1 >= 0) {
                                    B[i - 1][j - 1] = 1; // 左上鄰居為1
                                }
                                if (j + 1 <= 3) {
                                    B[i - 1][j + 1] = 1; // 右上鄰居為1
                                }
                            }
                            // 中層兩個鄰居和自己(i)
                            B[i][j] = 1;
                            if (j - 1 >= 0) {
                                B[i][j - 1] = 1; // 左鄰居為1
                            }
                            if (j + 1 <= 3) {
                                B[i][j + 1] = 1; // 右鄰居為1
                            }
                            // 下層三個鄰居(i+1)
                            if (i + 1 <= 3) { // 不會超出下面界線
                                B[i + 1][j] = 1; // 下面鄰居為1
                                if (j - 1 >= 0) {
                                    B[i + 1][j - 1] = 1; // 左下鄰居為1
                                }
                                if (j + 1 <= 3) {
                                    B[i + 1][j + 1] = 1; // 右下鄰居為1
                                }
                            }
                        }
                    }
                }
                // show
                show(B);
            } else { // 偶數輪
                if (ifFull(B) == true) { // 滿了
                    break;
                }
                System.out.println("round : " + round);

                // 對16格做一樣的判斷
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (B[i][j] == 1) { // 如果B陣列格子有細胞 -> 才處理A陣列
                            // 上層三個鄰居(i-1)
                            if (i - 1 >= 0) { // 不會超出上面界線
                                A[i - 1][j] = 1; // 上面鄰居為1
                                if (j - 1 >= 0) {
                                    A[i - 1][j - 1] = 1; // 左上鄰居為1
                                }
                                if (j + 1 <= 3) {
                                    A[i - 1][j + 1] = 1; // 右上鄰居為1
                                }
                            }
                            // 中層兩個鄰居和自己(i)
                            A[i][j] = 1;
                            if (j - 1 >= 0) {
                                A[i][j - 1] = 1; // 左鄰居為1
                            }
                            if (j + 1 <= 3) {
                                A[i][j + 1] = 1; // 右鄰居為1
                            }
                            // 下層三個鄰居(i+1)
                            if (i + 1 <= 3) { // 不會超出下面界線
                                A[i + 1][j] = 1; // 下面鄰居為1
                                if (j - 1 >= 0) {
                                    A[i + 1][j - 1] = 1; // 左下鄰居為1
                                }
                                if (j + 1 <= 3) {
                                    A[i + 1][j + 1] = 1; // 右下鄰居為1
                                }
                            }
                        }
                    }
                }
                // show
                show(A);
            }
        }
        // close Scanner
        scanner.close();
    }

    // if four corners be one return !
    static boolean ifFull(int[][] score) {
        if (score[0][3] == 1 && score[3][0] == 1) {
            return true;
        }
        return false;
    }

    // show array !
    static void show(int[][] score) {

        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                System.out.print(score[j][k] + " ");
            }
            System.out.println();
        }
        System.out.println();

    }
}

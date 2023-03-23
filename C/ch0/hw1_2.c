/*java hw1 -> C*/
#include <stdio.h>
#include <stdbool.h>

void show(int [][4]);
bool ifFull(int [][4]);

int main()
{
    int A[4][4], B[4][4];
    int i, j, x, y, round = 0;

    //初始陣列
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			A[i][j] = 0;
			B[i][j] = 0;
		}
	}
	
    printf("please input x: \n");
    scanf("%d", &x);
    printf("please input y: \n");
    scanf("%d", &y);

    // 第0輪
    A[y][x] = 1;
    printf("round : %d\n", round);
    show(A);

    // 後面幾輪
    while (true) {
        round++;
        
        if (round % 2 == 1) { // 奇數輪
            if (ifFull(A) == true) { // 滿了
                break;
            }
        printf("round : %d\n", round);

        // 對16格做一樣的判斷
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
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
            printf("round : %d\n", round);

            // 對16格做一樣的判斷
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
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
}

void show(int a[][4])
{
	int i, j;
	
    for ( i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

bool ifFull(int a[][4])
{
	int i, j;
	
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (a[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}


/*java hw1 -> C*/
#include <stdio.h>
#include <stdbool.h>

void show(int [][4]);
bool ifFull(int [][4]);

int main()
{
    int A[4][4], B[4][4];
    int i, j, x, y, round = 0;

    //��l�}�C
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

    // ��0��
    A[y][x] = 1;
    printf("round : %d\n", round);
    show(A);

    // �᭱�X��
    while (true) {
        round++;
        
        if (round % 2 == 1) { // �_�ƽ�
            if (ifFull(A) == true) { // ���F
                break;
            }
        printf("round : %d\n", round);

        // ��16�氵�@�˪��P�_
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (A[i][j] == 1) { // �p�GA�}�C��l���ӭM -> �~�B�zB�}�C
                    // �W�h�T�ӾF�~(i-1)
                    if (i - 1 >= 0) { // ���|�W�X�W���ɽu
                        B[i - 1][j] = 1; // �W���F�~��1
                        if (j - 1 >= 0) {
                            B[i - 1][j - 1] = 1; // ���W�F�~��1
                        }
                        if (j + 1 <= 3) {
                            B[i - 1][j + 1] = 1; // �k�W�F�~��1
                        }
                    }
                    // ���h��ӾF�~�M�ۤv(i)
                    B[i][j] = 1;
                    if (j - 1 >= 0) {
                        B[i][j - 1] = 1; // ���F�~��1
                    }
                    if (j + 1 <= 3) {
                        B[i][j + 1] = 1; // �k�F�~��1
                    }
                    // �U�h�T�ӾF�~(i+1)
                    if (i + 1 <= 3) { // ���|�W�X�U���ɽu
                        B[i + 1][j] = 1; // �U���F�~��1
                            if (j - 1 >= 0) {
                                B[i + 1][j - 1] = 1; // ���U�F�~��1
                            }
                            if (j + 1 <= 3) {
                                B[i + 1][j + 1] = 1; // �k�U�F�~��1
                            }
                        }
                    }
                }
            }
            // show
            show(B);
 		} else { // ���ƽ�
            if (ifFull(B) == true) { // ���F
                break;
            }
            printf("round : %d\n", round);

            // ��16�氵�@�˪��P�_
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    if (B[i][j] == 1) { // �p�GB�}�C��l���ӭM -> �~�B�zA�}�C
                        // �W�h�T�ӾF�~(i-1)
                        if (i - 1 >= 0) { // ���|�W�X�W���ɽu
                            A[i - 1][j] = 1; // �W���F�~��1
                            if (j - 1 >= 0) {
                                A[i - 1][j - 1] = 1; // ���W�F�~��1
                            }
                            if (j + 1 <= 3) {
                                A[i - 1][j + 1] = 1; // �k�W�F�~��1
                            }
                        }
                        // ���h��ӾF�~�M�ۤv(i)
                        A[i][j] = 1;
                        if (j - 1 >= 0) {
                            A[i][j - 1] = 1; // ���F�~��1
                        }
                        if (j + 1 <= 3) {
                            A[i][j + 1] = 1; // �k�F�~��1
                        }
                        // �U�h�T�ӾF�~(i+1)
                        if (i + 1 <= 3) { // ���|�W�X�U���ɽu
                            A[i + 1][j] = 1; // �U���F�~��1
                            if (j - 1 >= 0) {
                                A[i + 1][j - 1] = 1; // ���U�F�~��1
                            }
                            if (j + 1 <= 3) {
                                A[i + 1][j + 1] = 1; // �k�U�F�~��1
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


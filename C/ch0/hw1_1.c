/*java hw1 -> C*/
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

void dinner(int , int );
void stroll(int , int );
void bathroom(int , int );

int main()
{
	int option, wen_ans, ren_ans;

    while (TRUE) {
        printf("please enter 0-4\n");
        printf("0 : break while, 1 : dinner\n");
        printf("2 : take a walk, 3 : bathroom\n");
        scanf("%d", &option);

        if (option == 0) {
            printf("the end!!\n");
            break;
        } else if (option == 1) {
            printf("please wen's money\n");
            scanf("%d", &wen_ans);
            printf("please ren's money\n");
            scanf("%d", &ren_ans);

            dinner(wen_ans, ren_ans);
        } 
		else if (option == 2) {
            printf("1 : wen ok, 0 : wen not ok\n");
            scanf("%d", &wen_ans);
            printf("1 : ren ok, 0 : ren not ok\n");
            scanf("%d", &ren_ans);

            stroll(wen_ans, ren_ans);
        } 
		else {
            printf("1 : wen ok, 0 : wen not ok\n");
            scanf("%d", &wen_ans);
            printf("1 : ren ok, 0 : ren not ok\n");
            scanf("%d", &ren_ans);

            bathroom(wen_ans, ren_ans);
        }
        printf("\n\n");
    }
	
	system("PAUSE");
	return 0;
}

void dinner(int wen_ans, int ren_ans) {
    // AND
    if (wen_ans != 0 && ren_ans != 0) {
        printf("ubereat gogo\n");
    } 
	else {
        printf("no money no dinner QQ\n");
    }
}

void stroll(int wen_ans, int ren_ans) {
    // OR
    if (wen_ans == 1 || ren_ans == 1) {
        printf("let's take a walk\n");
    } 
	else {
        printf("it's brawlhalla time\n");
    }
}

void bathroom(int wen_ans, int ren_ans) {
    // XOR
    if ((wen_ans == 0 && ren_ans == 1)) {
        printf("bathroom\n");
    } 
	else if ((wen_ans == 1 && ren_ans == 0)) {
        printf("bathroom\n");
    } 
	else {
        printf("no bathroom\n");
    }
}

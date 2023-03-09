/*ptrDebug2*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand( time(NULL) );
	int min = 4;
	int max = 100;	
	int num = rand() % (max - min + 1) + min;
	int *ptr;
	ptr = &num;
	
	printf("num = %d\n", num);
	printf("using ptr to make num+20 :\n");
	*ptr += 20;
	printf("num = %d\n", num);
	
	system("PAUSE");
	return 0;
}


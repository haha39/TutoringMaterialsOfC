/*ptrDebug1*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 30;
	int *ptr;
	ptr = &num;
	
	printf("num = %d\n", num);
	printf("using ptr to get the value of num = %d\n", *ptr);
	
	system("PAUSE");
	return 0;
}


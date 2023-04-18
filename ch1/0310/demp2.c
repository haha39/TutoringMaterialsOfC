/*ptrDebug1*/
#include <stdio.h>
#include <stdlib.h>
void func_call(void);

int main()
{
	int num = 10;
	int *ptr; /*指向 num 的指標*/
	ptr = &num; 
	
	printf("num = %d	&num = %p\n", num, &num);
	/* 
	(1)	ptr = &num;
	(2)	ptr = num;
	(3)	*ptr = num;
	(4)	*ptr = &num;
	
	printf("num = %d\t&num = %p\n", num, &num);
	printf("*ptr = %d\tptr = %p\t&ptr = %p\n", *ptr, ptr, &ptr);

	(1)	ptr
	(2)	*ptr
	(3)	&ptr
	
	*ptr = num;*/

	func_call(); 
}

void func_call(void) {
	int num = 10;
	printf("num = %d	&num = %p\n", num, &num);
}



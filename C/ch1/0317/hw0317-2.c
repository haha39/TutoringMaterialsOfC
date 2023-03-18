/*hw0317-2*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8};
	int *p1, *p2, *p3, *p4;
	
	p1 = a + 5;
	p2 = p1 - 3;
	
	printf("a=%d, b=%d, c=%d, d=%d\n"
	, *(p1+1), a[0], *(p2-2), *(&a[7]));
	
	p3 = p1--;
	p4 = ++p2;
	
	printf("e=%d, f=%d, g=%d, h=%d\n"
	, *(p3+(*(p4-2))), a[-1+*p4+2], *p3-2, *(p4+(*(a+a[1]))));	
	
	system("PAUSE");
	return 0;
}


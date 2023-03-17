/*hw0317-1*/
#include <stdio.h>
#include <stdlib.h>

void swap(char*, char*);

int main()
{
	char x, y;
	x = 'a';
	y = 'b';
	
	printf("Initial ...\n");
	printf("x = %c, y = %c\n", x, y);
	
	swap(&x, &y);
	
	printf("\nAfter swapping ...\n");
	printf("x = %c, y = %c\n", x, y);
	
	system("PAUSE");
	return 0;
}

void swap(char *a, char *b)
{
	char temp;
	
	printf("\nIn swap() ...\n");
	printf("a = %c, b = %c\n", *a, *b);
	
	*a += 2;
	*b += 2;
	
	printf("End swap() ...\n");
	printf("a = %c, b = %c\n", *a, *b);
}


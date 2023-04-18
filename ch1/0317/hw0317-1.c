/*hw0317-1*/
#include <stdio.h>
#include <stdlib.h>

void cipher(char*, char*);

int main()
{
	char x, y;
	x = 'a';
	y = 'b';
	
	printf("Initial ...\n");
	printf("x = %c, y = %c\n", x, y);
	
	cipher(&x, &y);
	
	printf("\nAfter Caesar  ciphering ...\n");
	printf("x = %c, y = %c\n", x, y);
	
	system("PAUSE");
	return 0;
}

void cipher(char *m, char *n)
{
	printf("\nIn cipher() ...\n");
	printf("m = %c, n = %c\n", *m, *n);
	
	*m += 2;
	*n += 2;
	
	printf("End cipher() ...\n");
	printf("m = %c, n = %c\n", *m, *n);
}


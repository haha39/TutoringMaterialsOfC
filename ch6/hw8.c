#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int size = 2;
	int (*a)[size] = (int(*)[size])malloc(size * size * sizeof(int));
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%p ", &a[i][j]);
		}
		printf("\n");
	}
	
	free(a);
	system("PAUSE");
	return 0;
}


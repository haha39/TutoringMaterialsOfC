#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int size = 5;
	int **a = (int**)malloc(size * sizeof(int*));
	
	for(i = 0; i < size; i++) {
		a[i] = (int*)malloc(size * sizeof(int));
	}
	
	for(i = 0; i < size; i++) {
		for(j = 0; j < size; j++) {
			printf("%p	", &a[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < size; i++) {
		free(a[i]);
	}
	
	free(a);

	system("PAUSE");
	return 0;
}


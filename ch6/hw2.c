#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *dynArr;

	int arrLen1 = 10;
	int arrLen2 = 5;

	dynArr = malloc( arrLen1 * arrLen2 * sizeof(int) );

	if( dynArr == NULL ) {
		fprintf(stderr, "Error: unable to allocate required memory\n");
    	return 1;
  	}

	int i, j;
  	for (i = 0; i < arrLen1; i++) {
    	for (j = 0; j < arrLen2; j++) {
      		int index = i * arrLen2 + j;
      		dynArr[index] = index;
      		printf("%d ", dynArr[index]);
    	}
    	printf("\n"); 
	}

	free(dynArr);
	system("PAUSE");
	return 0;
}


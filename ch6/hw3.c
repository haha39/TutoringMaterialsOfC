#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *dynArr;
	int arrLen = 10;
	
	dynArr = calloc( arrLen, sizeof(int) );
	if( dynArr == NULL ) {
		fprintf(stderr, "Error: unable to allocate required memory\n");
    	return 1;
  	}
  	
	int i;
	for (i = 0; i < arrLen; i++) {
    	printf("%d\n", dynArr[i]);
  	}
  	
	free(dynArr);
	system("PAUSE");
	return 0;
}


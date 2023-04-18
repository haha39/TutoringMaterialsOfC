/*demo1*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	/*below equals : int *ptr[3] = {arr[0], arr[1], arr[2]};*/
	int *ptr[3];	
	ptr[0] = arr[0];
	ptr[1] = arr[1];
	ptr[2] = arr[2];
	
	for(i = 0; i < 3; i++) {
		printf("*ptr[%d] = %d, **(ptr+%d) = %d\n", i, *ptr[i], i, **(ptr+i));
	}

	system("PAUSE");
	return 0;
}



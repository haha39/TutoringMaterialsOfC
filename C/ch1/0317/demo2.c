/*demo2*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int i;
	
	for(i = 0; i < 5; i++) {
		printf("&arr[%d] = %p, arr+%d = %p\n", i, &arr[i], i, (arr+i));
	}

	system("PAUSE");
	return 0;
}


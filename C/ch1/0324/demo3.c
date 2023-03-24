/*demo3*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int size, int *arr);
void add(int size, int *arr);
void minus(int size, int *arr);
void sum(int size, int *arr);

int main()
{
	
	int a[SIZE] = {1, 2, 3, 4, 5};
	//show
	printf("the source array : \n");
	show(SIZE, a);
	//add 20
	printf("after adding 20 : \n");
	add(SIZE, a);
	show(SIZE, a);
	//minus 1
	printf("after minus 1 : \n");
	minus(SIZE, a);
	show(SIZE, a);

	system("PAUSE");
	return 0;
}

void show(int size, int arr1[]) {
	int i;
	
	for(i = 0; i < size; i++) {
		printf("%5d", arr1[i]);
	}
	printf("\n");
}

void add(int size, int arr2[]) {
	int i;
	
	for(i = 0; i < size; i++) {
		*(arr2 + i) += 20;
	}
}

void minus(int size, int arr3[]) {
	int i;
	
	for(i = 0; i < size; i++) {
		--(*arr3++);
	}
}


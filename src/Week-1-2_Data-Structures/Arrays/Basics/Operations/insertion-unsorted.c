#include <stdio.h>


int main() {
	int a[50] = { 6, 2, 0, 4, 5 };
	int size = 5;
	int pos = 3;
	int num = 10;

	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n===================\n");
	a[size] = a[pos-1];
	a[pos-1] = num;
	size++;

	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nsize: %d\n", size);
}
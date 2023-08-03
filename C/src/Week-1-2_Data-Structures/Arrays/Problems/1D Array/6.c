#include <stdio.h>


int main(void)
{
	int n;
	printf("Enter the number of elements you want to reverse: ");
	scanf("%d", &n);

	int arr[n], i;
	for (i = 0; i < n; i++)
	{
		printf("index[%d]: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nOriginal array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");

	printf("Reversed array:\n");
	for (i = n-1; i >= 0; i--)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	
	return (0);
}
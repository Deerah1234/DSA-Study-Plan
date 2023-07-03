#include <stdio.h>


int main(void)
{
	int array[10], even = 0, odd = 0;

	printf("Enter elements of array:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("index[%d]: ", i+1);
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] % 2 == 0) 
		{
			even++;
		} 
		else 
		{
			odd++;
		}
	}

	printf("Even: %d\nOdd: %d\n", even, odd);

	return (0);
}
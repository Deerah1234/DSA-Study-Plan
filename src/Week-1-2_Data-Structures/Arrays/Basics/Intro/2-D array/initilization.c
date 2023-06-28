#include <stdio.h>


int main(void)
{
	int array[2][3] = { 1, 2, 3, 4, 5, 6 };
	int array2[2][3] = { {1, 2, 3}, {4, 5, 6} };

	float array[2][3] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	float array2[2][3] = { {1.0, 2.0, 3.0}, {4.0, 5.0, 6.0} };

	char array[2][3] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	char array2[2][3] = { {'a', 'b', 'c'}, {'d', 'e', 'f'} };
	return (0);
}
#include <stdio.h>


int main(void)
{
	char *string = "hello";
	// OR
	char string2[] = "hello";

	for (int idx = 0; string[idx] != '\0'; idx++)
	{
		printf("%c", string[idx]);
	}
	printf("\n");
	
	return (0);
}

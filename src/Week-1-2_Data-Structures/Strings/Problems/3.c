#include <stdio.h>


int main() {
	char name[30];
	int count = 0, i = 0;

	printf("Enter name: ");
	gets(name);
	while (name[i] != '\0') 
	{
		count++;
		i++;
	}
	puts(name);
	printf("Length of the string is: %d\n", count);
}
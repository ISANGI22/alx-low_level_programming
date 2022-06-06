#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This is the main function
 *
 *
 * Return: always return 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int L;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", siizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}

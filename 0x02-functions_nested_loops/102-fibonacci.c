#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the application
 *
 * Return: Always return 0.
 */
int main(void)
{
	int i;
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long nn;

	for (i = 0; i < 50; i++)
	{
		nn = n1 + n2;
		printf("%lu", nn);

		n1 = n2;
		n2 = nn;

		if (i == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}

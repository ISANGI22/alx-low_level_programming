#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 10) //causes of initie loop
	{
		putchar(i);
	}

	printf("Infinite loop avaoided! \\o/\n");

	return (0);
}

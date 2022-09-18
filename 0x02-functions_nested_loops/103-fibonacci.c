#include <stdio.h>

/**
 * main - entry point of the application
 * Fibonacci 103 inf 4000000
 * Return: Always return 0.
 */
int main(void)
{
	int a = 0, b = 1, nn = 0;
	int sum = 0;

	while (nn < 4000000)
	{
		nn = a + b;
		a = b;
		b = nn;
		if (nn % 2 == 0)
			sum += nn;
	}
	printf("%i\n", sum);
	return (0);
}

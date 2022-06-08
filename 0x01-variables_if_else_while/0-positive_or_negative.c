#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * The main function - Entry point
 *
 * This is the main function
 *
 * Return 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d id zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

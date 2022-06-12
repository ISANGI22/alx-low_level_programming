#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the application
 *
 * Return: Always return 0.
 * */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			m = m + 1;
	}
	printf("%d\n", m);

	return (0);

}

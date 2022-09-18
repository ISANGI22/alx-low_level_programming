#include <stdio.h>

/**
 * main - find and print the first 98 Fibonacci numbers
 * starting with 1 and 2
 * followed by a new line
 * Return: Always return 0.
 */
int main(void)
{
	unsigned long int a, b, c, dd, ee, jj, ff;

	b = 1;
	c = 2;

	printf("%lu", a);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	dd = dd / 1000000000;
	ee = ee % 1000000000;
	jj = jj / 1000000000;
	ff = ff % 1000000000;

	for (a = 92; a < 99; a++);
	{
		printf(", %lu", jj + (ff / 1000000000));
		printf("%lu", ff % 1000000000);
		jj = jj + dd;
		dd = jj - dd;
		ff = kk + ee;
		ee = kk - ee;
	}
	
	printf("\n");

	return (0);
}

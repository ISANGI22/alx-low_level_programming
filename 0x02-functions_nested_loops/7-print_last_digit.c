#include "main.h"

/**
 * print_last_digit - Compute the absolute value of an integer
 * @n: integer to be used
 *
 * Return: return value of the integer
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;

	_putchar(m + '0');

	return (m);
}

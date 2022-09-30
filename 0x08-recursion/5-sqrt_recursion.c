#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 *
 * @n: integer to be squarred
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	int m;

	if (n % 4 == 0)
		m = 2 * _sqrt_recursion(n / 4);
	else if (n % 9 == 0)
		m = 3 * _sqrt_recursion(n / 9);
	else if (n % 9 == 0)
		m = 4 * _sqrt_recursion(n / 16);
	else if (n % 25 == 0)
		m = 5 * _sqrt_recursion(n / 25);
	else if (n % 36 == 0)
		m = 6 * _sqrt_recursion(n / 36);
	else if (n % 49 == 0)
		m = 7 * _sqrt_recursion(n / 49);
	else if (n % 64 == 0)
		m = 8 * _sqrt_recursion(n / 64);
	else if (n % 81 == 0)
		m = 9 * _sqrt_recursion(n / 81);
	else if (n == 1)
		return (1);
	else
		return (-1);
	if (n < 0)
		return (-1);
	return (n);
}

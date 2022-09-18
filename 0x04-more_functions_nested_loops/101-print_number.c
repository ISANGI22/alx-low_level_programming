#include "main.h"

/**
 * print_number - prints an integer
 * @n: parameter used in the function
 * Return: n
 */
void print_number(int n)

{
	int n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n/10)
		_putchar((n / 10) - '0');

	_putchar(n % 10 + '0');
}

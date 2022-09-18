#include "main.h"

/**
 * print_number - prints an integer
 * @n: parameter used in the function
 * Return: n
 */
void print_number(int n)

{
	int x;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((n % 10) + '0');
}

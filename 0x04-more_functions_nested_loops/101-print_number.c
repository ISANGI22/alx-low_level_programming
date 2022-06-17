#include "main.h"

/**
 * print_number - prints a square
 * @n: parameter used in the function
 * Return: n
 */
void print_number(int n)

{
	unsigned int x = y;

	if (y < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x > 9)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}

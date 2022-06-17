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
		y = -y;
	}
	if (y > 9)
	{
		print_number(y / 10);
	}
	_putchar(y % 10 + '0');
}

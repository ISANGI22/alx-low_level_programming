#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 * @n: integer used for loop
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar(n);

	_putchar('\n');
}

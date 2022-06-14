#include "main.h"

/**
 * print_most_numbers - print number from 0-9/2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)

{
	int x;

	x = 0;
	while (x < 10)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
			x++;
		}
	}
	_putchar('\n');
}

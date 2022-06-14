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
	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar(x + '0');
	}
	_putchar('\n');
}

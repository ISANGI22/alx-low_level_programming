#include "main.h"

/**
 * print_line - draw a straight line in terminal
 *
 * Return: Always 0
 */
void print_line(int n)

{
	while (n++ > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}

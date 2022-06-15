#include "main.h"

/**
 * print_diagonal - draw a diagonal line in term
 * @n: paramater used in the function
 */
void print_diagonal(int n)

{
	int x, y;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y <= x; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

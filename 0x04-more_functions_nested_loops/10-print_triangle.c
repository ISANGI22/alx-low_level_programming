#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: parameter used in the function
 * Return: nothing
 */
void print_triangle(int size)

{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x <= size; x++)
		{
			for ((y = size - x); y > 0; y--)
				_putchar(' ');
			for (x = 0, x < y; y++)
				_putchar('#');
			if (x ==y)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

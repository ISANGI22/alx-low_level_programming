#include "main.h"

/**
 * more_numbers - print 10 number from 0-14
 *
 * Return: Always 0
 */
void more_numbers(void)

{
	int x;
	int y;

	x = 0;
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

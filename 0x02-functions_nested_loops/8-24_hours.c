#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * @n: integer to be used
 *
 * Return: return value of the integer
 */
void jack_bauer(void)
{
	int m;
	int n;
	int o;
	int p;

	for (m = 0; m <=2 ; m++)
	{
		for (n = 0; n <= 3; n++)
		{
			for (o = 0; o <= 5; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					_putchar((m) + '0');
					_putchar((n) + '0');
					_putchar(':');
					_putchar((o) + '0');
					_putchar((p) + '0');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}

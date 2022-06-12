#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 *		from 00:00 to 23:59 
 */
void jack_bauer(void)
{
	int m;
	int p;

	for (m = 0; m <=23 ; m++)
	{
		for (p = 0; p <= 59; p++)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar(':');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				_putchar('\n');
			}
	}
	_putchar('\n');
}

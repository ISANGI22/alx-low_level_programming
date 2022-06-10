#include "main.h"

/**
 * print_alphabet - Print out alphabet follwo by new line
 */
void print_alphabet_x10(void)
{
	int n;
	char alph;

	for (n = 0; n <= 10; n++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');

	}
}

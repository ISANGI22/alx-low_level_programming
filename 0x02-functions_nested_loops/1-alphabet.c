#include "main.h"

/**
 * print_alphabet - Print out alphabet follwo by new line
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}

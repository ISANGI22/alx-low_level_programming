/**
 * 1-alphabet.c
 * Modeste K
 */

#include "main.h"

/**
 * print_alphabet() Print out alphabet follwo by new line
 *
 * La fonction aura en charge l'impression de l'aphabet suivi d'une nouvelle
 * une fois invoquée
 * Return
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}

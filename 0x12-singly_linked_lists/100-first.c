#include <stdio.h>

void print_first(void) __attribute__ ((constructor));

/**
 * print_first - Function that prints a string
 * before the execution of the main function
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

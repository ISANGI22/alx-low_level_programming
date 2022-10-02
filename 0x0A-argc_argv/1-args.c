#include <stdio.h>
#include <string.h>
#define UNUSED(x) (void)(x)

/**
 * main - Function that prints the number of arguments passed into it
 *
 * @argc: argument to count the parameters
 * @argv: argument to hlod the parameters
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}

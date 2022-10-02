#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Function that prints its name followed by a new line
 *
 * @argc: argument to count the parameters
 * @argv: argument to hlod the parameters
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}

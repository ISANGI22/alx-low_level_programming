#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Function that prints all arguments it receives
 *
 * @argc: argument to count the parameters
 * @argv: argument to hold the parameters
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	UNUSED(argc);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

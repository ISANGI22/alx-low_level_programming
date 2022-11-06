#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a tet file and prints in to the POSIX
 * standard output
 *
 * @filename: a pointer to the file to be read and print to STOUT
 * @letters: number of letter to be read and print
 *
 * Return: 0 if the file can not be opened or read
 * 0 if the filename is NULL
 * 0 if write fails or does not write expected amount of bytes
 * Otherwise, the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}

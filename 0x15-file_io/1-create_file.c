#include "main.h"

/**
 * create_file - Function that creates a file
 *
 * @filename: a pointer to the file to be created
 * @text_content: a pointer to a string to write the file
 *
 * Return: 1 on succes, -1 on failure (file can not be created,
 * file can not be written, write "fails", etc...
 * the created permission: RW------- not change the permissions if file exists
 * if the file exist, truncate if
 * if the filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}

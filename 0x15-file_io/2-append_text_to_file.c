#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: a pointer to the file to be created
 * @text_content: a pointer to the string of character to be added
 * to the file
 *
 * Return: 1 on success, -1 on failure or the the filename is NULL
 * Do not create the file if it does not exist
 * if text_content is NULL, do not add anything to the file. Return 1 if
 * the file exist and -1 if the file does not exist or if you do not have
 * the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}

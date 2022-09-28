#include "main.h"
#include <string.h>

/**
* *_strstr - Function that locates a substring
*
* @haystack: character to search in
* @needle: character to found
*
* Return: pointer to the located substring of NULL
*/
char *_strstr(char *haystack, char *needle)
{
	long unsigned int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		for (i = 0; i < strlen(haystack); i++)
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}

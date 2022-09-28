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

	if (*needle == '\0')
	{
		return haystack;
	}
	for (i = 0; i < strlen(haystack); i++)
	{
		if (*(haystack + 1) == *needle)
		{
			const char *ptr = _strstr(haystack + i + 1, needle + 1);
			return (ptr) ? ptr - 1 : NULL;
		}
	}
	return NULL;
}	

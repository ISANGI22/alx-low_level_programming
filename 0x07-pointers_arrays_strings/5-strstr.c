#include "main.h"

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
	if (*needle == '\0')
	{
		return haystask;
	}
	for (int i = 0; i < strlen(haystack); i++)
	{
		if (*(haystask + 1) == *needle)
		{
			const char *ptr = _strstr(haystack + i + 1, needle + 1);
			return (ptr) ? ptr - 1 : NULL;
		}
	}
	return NULL;
}	

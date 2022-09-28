#include "main.h"

/**
* int _strspn - Function that gets the length of prefix substring
*
* @s: pointer to be used
* @accept: character to be used
*
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bts = 0;
	
	int i;
	while (*s)
	{
		i++;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bts++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bts);
		}
		s++;
	}
	return (bts);
}


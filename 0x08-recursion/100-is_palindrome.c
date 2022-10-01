#include "main.h"

int get_strlen(char *s);
int ver_palindrome(char *s, int longu, int i);
int is_palindrome(char *s);

/**
 * get_strlen - Function that returns the length of a string
 *
 * @s: string to get the length
 *
 * Return: The length of the string
 */
int get_strlen(char *s)
{
	int longu = 0;

	if (*(s + longu))
	{
		longu++;

		longu = longu + get_strlen(s + longu);
	}
	return (longu);
}

/**
 * ver_palindrome - Function that checks if a string is a palindrome
 *
 * @s: String to be checked
 * @longu: integer used as length of the string
 * @i: inde of the string to be checked
 *
 * Return: 1 if the string is a palidrome, 0 if not
 */
int ver_palindrome(char *s, int longu, int i)
{
	if (s[i] == s[longu / 2])
		return (1);
	if (s[i] == s[longu - i - 1])
		return (ver_palindrome(s, longu, i + 1));
	return (0);
}

/**
 * is_palindrome - Function that returns 1 if a string
 * is a palidrome and 0 if not
 *
 * @s: character to be checked 
 *
 * Return: Always 0
 */
 int is_palindrome(char *s)
{
	int i = 0;
	int longu = get_strlen(s);

	if (!(*s))
		return (1);
	return (ver_palindrome(s, longu, i));
}

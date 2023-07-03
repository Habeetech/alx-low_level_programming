#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string
 * @c: the character to check for
 * Return: a pointer the the first occurence c in the string s,
 * or NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
	}
	}
	return ('\0');
}

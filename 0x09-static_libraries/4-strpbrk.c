#include "main.h"

/**
 * _strpbrk - a function that searches a string for any bytes
 * @s: the first occurence in the string
 * @accept: the string
 * Return: a pointer to the byte in s that matches accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}

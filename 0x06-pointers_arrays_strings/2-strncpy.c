#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: max num of character to be copied
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

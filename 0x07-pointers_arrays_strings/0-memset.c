#include "main.h"

/**
 * _memset - fills memorry with a constant byte
 * @n: the first memory bytes
 * @s: pointer to the memory byte
 * @b: constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}

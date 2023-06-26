#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The char character
 * Return: result
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

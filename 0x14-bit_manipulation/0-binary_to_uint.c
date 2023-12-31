#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to an integer
 * @b: pointer to the binary to be converted
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);
	result = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}

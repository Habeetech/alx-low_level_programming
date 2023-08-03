#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string of binary numbers of 0 and 1
 * Return: the converted number or 0 if there is one or more chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int base, len, i, bin;
	unsigned int result;

	base = 2;
	len = strlen(b);
	result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		bin = b[i] - '0';

		result = result * base + bin;
	}
	return (result);
}

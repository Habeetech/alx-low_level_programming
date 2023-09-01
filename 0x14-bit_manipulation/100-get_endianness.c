#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness of the system.
 * Return: 0 if the system is big endian,
 * 1 if the system is little endian.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	unsigned char *byte = (unsigned char *) &test;

	return ((int) *byte);
}

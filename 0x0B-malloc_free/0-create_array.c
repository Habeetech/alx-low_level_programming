#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and init it with a specific char
 * @size: size of the array
 * @c: the specific char to use for initialization
 * Return: NULL if size is 0 or fails, a pointer to the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	return (array);
}

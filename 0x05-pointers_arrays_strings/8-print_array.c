#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * separated by commas, followed by a space
 * displayed in the same order they are stored
 * @a: array of integers
 * @n: number of elements to be printed
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");

	}
	printf("\n");
}

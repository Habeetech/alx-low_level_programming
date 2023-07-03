#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to an array
 * @size: size of the array
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("sum of main diagonal: %d\n", sum1);
	printf("sum of secondary diagonal: %d\n", sum2);
}

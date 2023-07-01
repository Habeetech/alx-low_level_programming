#include "main.h"

/**
 * reverse_array - reverse the content of an array of int
 * @a: pointer to the array
 * @n: number of elements of the array
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;

	}
}

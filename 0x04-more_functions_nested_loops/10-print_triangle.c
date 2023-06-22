#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: None
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int n, m;

		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= n; m++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

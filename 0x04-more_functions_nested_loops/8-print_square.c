#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size:  the size of square
 * Return: None
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int n, m;

		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}

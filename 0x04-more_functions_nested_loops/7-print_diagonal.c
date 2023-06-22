#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: no of times the character is printed
 * ends with a new line
 * Return: None
 *
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 0;

		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}

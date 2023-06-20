#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting point
 * Return: None
 */

void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			if (m != n)
				_putchar(',');
			_putchar(' ');
			if (m < 0)
			{
				_putchar('-');
				m *= -1;
			}
			if (m >= 10)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
	}
		else
		{
			for (m = n; m >= 98; m--)
			{
				if (m != n)
					_putchar(',');
				_putchar(' ');
				if (m < 0)
				{
					_putchar('-');
					m *= -1;
				}
				if (m >= 10)
					_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
}

#include "main.h"


/**
 * times_table - function that prints the 9 time table
 *
 *
 * Return: Always 0
 */

void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			int result = n * m;

			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');

					if (n * (m + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

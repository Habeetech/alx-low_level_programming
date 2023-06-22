#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 * Return: None
 */

void print_numbers(void)
{
int n = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0' + n);
	}
		_putchar('\n');
	}

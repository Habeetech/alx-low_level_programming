#include "main.h"

/**
 * print_line - draws a straight line
 * @n: no of times _ should be printed
 * end with a new line
 * Return: None
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
}

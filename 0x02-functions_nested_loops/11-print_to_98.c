#include <stdio.h>

/**
 * print_to_98 - Prints all no from n to 98
 * @n: The starting point
 *Return: None
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}


#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @str: string to be printed in rev
 * Return: None
 */
void print_rev(char *str)
{
	int length = 0;
	char *end = str;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	while (length > 0)
	{
		_putchar(*(str + length - 1));
		length--;
	}
	_putchar('\n');
}

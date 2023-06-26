#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string to be printed
 * Return: None
 */
void puts_half(char *str)
{
	int length = 0;
	char *half;
	char *end = str;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	if (length % 2 == 0)
	{
		half = str + (length / 2);
	}
	else
	{
		half = str + ((length + 1) / 2);
	}
	while (*half != '\0')
	{
		_putchar(*half);
		half++;
	}
	_putchar('\n');
}

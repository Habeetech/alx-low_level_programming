#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * Description: prints alphabet 'a' to 'z' ten times in lowercase
 * Return: None
 */

void print_alphabet_x10(void)

{
	char n;
	char i;

	for (i = 0; i < 10; i++)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
}

#include "main.h"

/**
 * print_arg - prints all argument it recieves
 * one argument per line
 * ending with a new line
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0
 */

int print_arg(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}

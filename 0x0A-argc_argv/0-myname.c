#include "main.h"
#include <unistd.h>
/**
 * _putchar - output code
 * @c: character to print
 * Return: Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *print_name - prints its own name
 *@argc: argument count
 *@argv: argument variable
 *Return: Always 0
 */

int print_name(int argc, char *argv[])
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
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	print_name(argc, argv);
	return (0);
}

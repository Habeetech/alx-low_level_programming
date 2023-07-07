#include "main.h"

/**
 * charToInt - coverts to int
 * mul - prints result of a multiplication
 * followed by a newline
 * @str: string to takes care of input
 * Return: 1 if argument isn't two int
 * and print error followed by a new line
 */
int charToInt(char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result * sign);
}
/* mul - prints product of a and b */
int mul(char *argv[], int *prod)
{
	int a = charToInt(argv[0]);
	int b = charToInt(argv[1]);

	if (a == 0 || b == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		return (1);
	}
	*prod = a * b;
	_putchar(*prod);
	return (0);
}

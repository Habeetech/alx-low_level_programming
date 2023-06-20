#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: character to prints the last digit of
 * Return: The value of the last digit
 */

int print_last_digit(int n)

{
	int last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}

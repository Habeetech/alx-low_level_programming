#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * multiply_numbers - multiply two integers
 * @num1: first integer
 * @num2: second integer
 * return: always 0 success
 */

int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * print_number - prints an integer
 * @number: number to print
 * Return: None
 */

void print_number(int number)
{
	int num_digits = 0;
	int temp = number;

	if (number == 0)
	{
		_putchar('0');
		return;
	}
	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}
	char digits[num_digits];

	for (int i = num_digits - 1; i >= 0; i--)
	{
		digits[i] = number % 10 + '0';
		number /= 10;
	}
	for (int i = 0; i < num_digits; i++)
	{
		_putchar(digits[i]);
	}
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: Success 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	int result = multiply_numbers(num1, num2);

	print_number(result);
	_putchar('\n');
	return (0);
}

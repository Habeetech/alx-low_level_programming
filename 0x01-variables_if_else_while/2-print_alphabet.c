#include <stdio.h>

/**
 * main - "alphabets in lowercase"
 * Return: 0 always
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}

	putchar('\n');

	return (0);
}

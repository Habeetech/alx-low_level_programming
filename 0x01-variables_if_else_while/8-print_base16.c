#include <stdio.h>
/**
 * main - "numbers of base 16 in lowercase"
 * Return: Always 0
*/
int main(void)
{
	char alphaNum;

	for (alphaNum = '0'; alphaNum <= '9'; alphaNum++)
	{
	putchar(alphaNum);
	}
	for (alphaNum = 'a'; alphaNum <= 'f'; alphaNum++)
	{
	putchar(alphaNum);
	}

	putchar('\n');

	return (0);
}

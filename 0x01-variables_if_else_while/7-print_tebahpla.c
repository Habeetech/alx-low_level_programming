#include <stdio.h>
/**
 * main - "prints the alphabet in lowercase letters in reverse order"
 * Return: Always 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
	putchar(alphabet);
	}

	putchar('\n');

	return (0);
}

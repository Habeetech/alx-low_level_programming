#include <stdio.h>
#include <ctype.h>
/**
 * main - "entry"
 * Return: Always 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != 'e' && alphabet != 'q')
	{
	putchar(alphabet);
	}
	alphabet = tolower(alphabet);
	putchar('\n');

	return (0);
}

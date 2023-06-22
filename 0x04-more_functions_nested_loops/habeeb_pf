#include <stdio.h>

/**
 * largeprifac - finds and prints the largest primefactor of a number
 * @n: is the number to find the largest prime factor of
 * Return: the largest prime factor of the number
 */

int largeprifac(long n)
{
	int largefac = -1;
	int i;

	while (n % 2 == 0)
	{
		largefac = 2;
		n /= 2;
	}
	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largefac = i;
			n /= i;
		}
	}
	return (largefac);
}

int main(void)
{
	long number = 612852475143;

	int largestfactor = largeprifac(number);

	printf("Largest prime factor of %ld is: %d\n", number, largestfactor);

	return (0);
}

#include <stdio.h>

/**
 * largeprifac - finds and prints the largest primefactor of a number
 * @n: is the number to find the largest prime factor of
 * Return: the largest prime factor of the number
 */

int largeprifac(long long n)
{
	int largefac = -1;

	while (n % 2 == 0)
	{
		largefac = 2;
		n /= 2;
	}
	int i;

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
	long long number = 612852475143;

	int largestfactor = largeprifac(number);

	printf("Largest prime factor of %lld is: %d\n", number, largestfactor);

	return (0);
}

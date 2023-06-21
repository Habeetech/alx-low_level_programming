#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void positive_or_negative(int n);

/**
 * main - Entry point
 * description: "get a random number and print number"
 * Return: 0 "always return zero"
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	positive_or_negative(n);

	return (0);
}

/**
 * positive_or_negative - prints whether a number is positive, negative or otherwise
 * @n: the number to check
 */
void positive_or_negative(int n)
{
if (n > 0)
{
	printf("%d is positive\n", n);
}
	else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);

}
}

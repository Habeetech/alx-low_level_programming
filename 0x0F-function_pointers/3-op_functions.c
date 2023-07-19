#include <stdio.h>
/**
 * op_mod - modulus two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of the two integers
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: division of the two integers
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the two integers
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - finds the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of the two integers
 */
int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}
/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: product of the two integers
 */
int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);

}

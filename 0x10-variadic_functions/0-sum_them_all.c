#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sum all arguments passed
* @n: no of args
* Return: the sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}

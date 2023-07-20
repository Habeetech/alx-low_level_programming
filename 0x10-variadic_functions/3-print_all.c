#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything followed by a new line
 * @format: a list of type of args
 * Return: None
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int num;
	char character;
	float fnum;
	
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
				{
					character = va_arg(args, int);
					printf("%c", character);
				}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			fnum = (float)va_arg(args, double);
			printf("%f", fnum);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL) printf("(nil)");
			else printf("%s", str);
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')) printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}

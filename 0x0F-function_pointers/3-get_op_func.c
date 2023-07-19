#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - select function to perform based on the operator passed
 * @s: operator passed as argument to the program
 * Return: pointer to the function corresponding to the operator passed
 * if 's' does not match any of the operators, return NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	op_t op = ops[i++];

	while (op.op != NULL)
	{
		if (strcmp(s, op.op) == 0)
			return (op.f);
		op = ops[i++];
	}
	return (NULL);
}

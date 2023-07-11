#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the newly allocated space
 * @str: the main string
 * Return: NULL if str is NULL or if insufficient memory,
 * otherwise a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *newStr;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	newStr = malloc((len + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		newStr[i] = str[i];
	}
	newStr[len] = '\0';
	return (newStr);
}

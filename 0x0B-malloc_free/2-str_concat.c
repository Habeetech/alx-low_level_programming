#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory that contains
 * the contents of s1 followed by s2 and null-terminated,
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *s12 = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	if (s12 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s12[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s12[i + j] = s2[j];
	}
	s12[i + j] = '\0';
	return (s12);
}

#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the pointer to the null terminated
 * string to be searched
 * @needle: the pointer to the null terminated
 * string reperesenting the substring to be
 * searched for
 * Return: a pointer to the begening of the located
 * substring or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int k = i;

		for (j = 0; needle[j] != 0 && haystack[k] != '\0'
				&& needle[j] == haystack[k]; j++, k++)
		{

		}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
	}
	return ('\0');
}

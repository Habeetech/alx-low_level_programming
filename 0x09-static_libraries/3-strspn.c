#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: initial segemnt
 * @accept: string to find
 * Return: number of bytes in s which consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					found = 1;
					break;
				}
			}
		if (!found)
		{
			return (count);
		}
		count++;
	}
	return (count);
}

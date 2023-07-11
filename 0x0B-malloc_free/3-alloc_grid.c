#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a two dimensional array of integers
 * each element of the grid should be init to 0
 * @height: height of the array
 * @width: width of the array
 * Return: NULL on failure and if height and width is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	if (height == 0 || height < 0)
	{
		return (NULL);
	}
	if (width == 0 || height < 0)
	{
		return (NULL);
	}
	height = 0;
	width = 0;
	int *grid = (width[], height[]);

	return (grid);
}

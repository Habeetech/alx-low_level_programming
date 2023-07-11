#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid previously created
 * @grid: pointer to the grid
 * height: height of te array
 * Return: None
 */

void free_grid(int **grid, int height)
{
	free(grid);
	return;
}

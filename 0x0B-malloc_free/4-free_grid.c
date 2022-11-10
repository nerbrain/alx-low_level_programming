#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free memory
 *@grid: 2 dimensional
 *@height: height
 *
 *Return: N/A
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);

}

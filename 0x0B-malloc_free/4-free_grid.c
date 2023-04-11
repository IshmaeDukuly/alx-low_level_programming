#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees 2 dimensional grid
 * @grid: This is the integer
 * @height: integer
 * Return: Success
 */

void free_grid(int **grid, int height)
{
	int num;

	for (num = 0; num < height; num++)
	{
		free(grid[num]);
	}
	free(grid);
}

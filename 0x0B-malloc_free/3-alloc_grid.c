#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns to a dimensional array
 * @width: The integer
 * @height: Height of an integer
 * Return: NULL
 */


int **alloc_grid(int width, int height)
{
	int b;
	int a;
	int **grid = (int **) malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		grid[b] = (int *) malloc(width * sizeof(int));

		if (grid[b] == NULL)
		{
			for (a = 0; a < b; a++)
			{
				free(grid[a]);
			}
			free(grid);
			return (NULL);
		}
		for (a = 0; a < width; a++)
		{
			grid[b][a] = 0;
		}
	}
	return (grid);
}

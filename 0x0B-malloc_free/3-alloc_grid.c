#include "main.h"
#include <stdlib.h>

/**
 * 3-alloc_grid.c - A function that returns to a dimensional array
 * @width: The integer
 * @height: Height of an integer
 * Return: 0 Success
 */


int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **grid = (int **) malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)

		 grid[a] = (int *) malloc(width * sizeof(int));

		if (grid[a] == NULL)

			for (b = 0; b < a; b++)

				free(grid[b]);


			free(grid);
			return (NULL);

	for (b = 0; b < width; b++)

			 grid[a][b] = 0;


	return (grid);
}

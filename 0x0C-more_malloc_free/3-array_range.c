#include "main.h"

/**
 * array_range - the function
 * @min: the minimum
 * @max: the maximum
 * Return: return a pointer
 */

int *array_range(int min, int max)
{
	int x, *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= max - min; x++)
	{
		array[x] = min + x;
	}
	return (array);
}

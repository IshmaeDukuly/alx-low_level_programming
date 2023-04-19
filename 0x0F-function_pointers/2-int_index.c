#include "function_pointers.h"

/**
 * int_index - for an integer
 * @array: array to search for
 * @size: arrray size
 * @cmp: pointer to compare function
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}

#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  function given as a parameter
 * to  each of the element of an array
 * @array: This is the array to be iterated over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}

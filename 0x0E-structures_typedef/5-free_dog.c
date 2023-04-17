#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the struct pointer
 *
 * @d: point to free
 *
 * Return: Awlays 0 (Success)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

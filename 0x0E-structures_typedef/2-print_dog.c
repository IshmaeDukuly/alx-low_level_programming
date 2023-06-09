#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the dog
 *
 * @d: point to struct dog
 *
 * Return: Always ) (Success)
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}

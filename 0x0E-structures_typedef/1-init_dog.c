#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @d: input pointer to struct dog
 * @name: Enter the dog's name
 * @age: Enter the dog's age
 * @owner: Enter the dog's owner name
 *
 * Return: Always 0 (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

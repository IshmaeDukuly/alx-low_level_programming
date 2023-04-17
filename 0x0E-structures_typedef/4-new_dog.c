#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 *
 * @str:  get the length of a string
 *
 * Return: length of string
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - this function will return dest with a copy of a string from src
 *
 * @src: copy the string
 * @dest: copy string
 *
 * Return: dest
*/

char *_strcopy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - this function  will create a new dog
 *
 * @name: name of dog
 * @age: the dog's age
 * @owner: the dog owner's name
 *
 * Return: struct pointer dog
 *         NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}

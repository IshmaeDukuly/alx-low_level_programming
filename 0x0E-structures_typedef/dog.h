#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of the dog
 *
 * @name: the dog's name
 * @age: th dog's age
 * @owner: the dog owner's name
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -the Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* struct dog */

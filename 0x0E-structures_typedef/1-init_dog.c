#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize the struct of the dog
 * @d: pointer to struct
 * @name: Name of dog
 * @age: Age of the struct dog
 * @owner: Name of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

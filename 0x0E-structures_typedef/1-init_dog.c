#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
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

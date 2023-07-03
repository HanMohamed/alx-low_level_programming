#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  a function that creates a new dog.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, len_name, len_owner;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (len_name = 0; name[len_name]; len_name++)
		;

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;

	for (len_owner = 0; name[len_owner]; len_owner++)
		;
	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; owner[i]; i++)
		dog->owner[i] = owner[i];
	dog->name[i] = '\0';
	return (dog);
}

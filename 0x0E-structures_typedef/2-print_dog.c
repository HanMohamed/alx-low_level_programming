#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure dog
 *
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */
void print_dog(struct dog *d)
{
	char *str;
	str = NULL;

	if (d != NULL)
	{
		if (d->name == NULL)
			str = "(nil)";
		else
			str = d->name;
		printf("Name: %s\n", str);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			str = "(nil)";
		else
			str = d->owner;
		printf("Owner: %s\n", str);
	}
}

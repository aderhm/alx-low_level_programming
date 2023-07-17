#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  creates a new dog.
 * @name: dog's name,
 * @age: dog's age,
 * @owner: dog's owner,
 *
 * Return: void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (!d)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

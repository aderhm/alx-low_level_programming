#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	if (!name || age < 0 || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!d->name)
	{
		free(d->name);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);

	return (d);
}

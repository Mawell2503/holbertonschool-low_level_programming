#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	size_t i, len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	len = 0;
	while (name[len])
		len++;

	for (i = 0; i < len; i++)
		d->name[i] = name[i];

	d->name[len] = '\0';

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	len = 0;
	while (owner[len])
		len++;

	for (i = 0; i < len; i++)
		d->owner[i] = owner[i];

	d->owner[len] = '\0';

	d->age = age;

	return (d);
}

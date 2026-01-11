#include <stdio.h>
#include "dog.h"

/**
 * init_dog - fills existing struct dog
 * @d:pointer of where information to be filled is.
 * @name: points to name
 * @age: age
 * @owner: points to owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"

/**
 * free_dog - frees everything safely except age(not pointer)
 * @d: points towards everything
 *
 * Return:0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

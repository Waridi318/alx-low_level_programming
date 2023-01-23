#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: *p -> dogs
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

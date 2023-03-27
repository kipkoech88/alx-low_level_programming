#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory space by dog elements
 * @d: dogs pointer
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

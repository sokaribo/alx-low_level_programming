#include <stdlib.>
#include "dog.h"

/**
 * free_dog - a function that free dogs
 * @d: pointer to dog struct.
 *
 * Return: void.
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

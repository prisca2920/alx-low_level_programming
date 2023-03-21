#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free dog - frees memory allocated to dog
 * @d: character to be checked
 * Return: 0 success
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

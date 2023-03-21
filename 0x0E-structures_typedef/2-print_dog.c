#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: character to be checked
 * Return: 0 success
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
	}

	if (d->name == NULL)
	{
	printf("Name: (nil)");
	}
	if (d->age == 0)
	{
	printf("Age: 0");
	}
	if (d->owner == NULL)
	{
	printf("Owner: (nil)");
	}
}

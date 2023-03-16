#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked -allocates memory using malloc
 * @b: character to be checked
 * Return: a pointer or exits 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

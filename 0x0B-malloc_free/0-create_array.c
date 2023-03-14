#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: first character
 * @c: second character
 * Return: 0, or a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	ptr[i] = c;
	}
	return (ptr);
}

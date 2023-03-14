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
	if (size == 0)
	{
	return (NULL);
	}



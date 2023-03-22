#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array.
 * @array: first char
 * @size: second char
 * @action: third char
 * Return: 0 success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}

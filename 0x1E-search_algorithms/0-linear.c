#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: pointer to the first element to be searched
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index or -1 fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
	return (-1);
	}

	for (i = 0; i <= size - 1; i++)
	{
	printf("Value checked array[%lu] = [%i]\n", i, array[i]);

	if (array[i] == value)
	{
	return (i);
	}
	}

	return (-1);
}

#include "search_algos.h"

/**
 * linear_search - searches ints linearly
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index or -1 if it fails
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
	return (-1);
	}

	for (i = 0; i <= size - 1; i++) 
	{
	if (array[i] == value)
	{
	printf("%i", array);
	return (i);
	}
	printf("%d", array)
	}

	return -(1);
}

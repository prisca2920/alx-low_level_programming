#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of ints
 * @array: pointer to first element to be checked
 * @size: no of elements in array
 * @value: the value to search for
 * Return: the index or -1 fail
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
	return (-1);
	}

	while (right >= left)
	{
	printf("Searching in array: ");

	for (i = left; i < right; i++)
	{
	printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);

	i = (left + right) / 2;

	if (array[i] == value)
	{
	return (i);
	}

	if (array[i] > value)
	{
	right = i - 1;
	}

	else
	{
	left = i + 1;
	}
	}

	return (-1);
}


#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index or -1 if it fails
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i = 0, mid = 0;

	if (array == NULL)
	{
	return (-1);
	}

	while (left <= right)
	{
	mid = ((left + right) / 2);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
	if (i != left)
	{
	printf(", ");
	}
	printf("%i", array[i]);
	}
	printf("\n");

	if (array[mid] == value)
	{
	return (mid);
	}

	else if (array[mid] < value)
	{
	left = mid + 1;
	}
	else
	{
	right = mid - 1;
	}
	}

	return (-1);
}

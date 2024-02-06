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
	int i;

	if (array == NULL)
	{
	return (-1);
	}

	for (i = 0; i <= size -1; i++)
	{
	if (array[i] != value)
	{
	printf("Value checked array[%d] = %d",(i, array));
	}
	
	else if (array[i] == value)
	{
	printf("Value checked array[%d] = %d",(i, array));
	printf("Found %d at index: %d"(value, i));
	}

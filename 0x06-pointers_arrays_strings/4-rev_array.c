#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: first character to be checked
 * @n: second character to be checked
 * Return: 0 success
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first character to be checked
 * @b: second character to be checked
 * Return: 0 success
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: first char
 * @index: second char
 * Return: 1 success, -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || n == NULL)
	{
	return (-1);
	}

	*n &= ~(1 << index);
	return (1);
}

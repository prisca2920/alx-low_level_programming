#include "main.h"

/**
 * get_bit - returns  the value of a bit
 * @n: first char
 * @index: second char
 * Return: the bit or -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}

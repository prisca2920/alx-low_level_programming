#include "main.h"

/**
 * flip_bits - flips numbers
 * @n: first char
 * @m: second char
 * Return: the flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int count = 0;

	while (i)
	{
	if (i & 1)
	count++;
	i >>= 1;
	}
	return (count);
}

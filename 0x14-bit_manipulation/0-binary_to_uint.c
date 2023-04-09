#include "main.h"

/**
 * binary_to_uint - converts a binary to an int
 * @b: character to be checked
 * Return: the number, or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
	{
	return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] < '0' || b[i] > '1')
	{
	return (0);
	}

	num = num << 1;
	num += (b[i] - '0');
	}

	return (num);
}

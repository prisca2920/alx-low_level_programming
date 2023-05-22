#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: first character to be checked
 * @src: second character to be checked
 * @n: integer to be checked
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

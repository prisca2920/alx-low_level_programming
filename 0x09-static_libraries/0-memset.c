include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: first character to be checked
 * @b: second charcter to be checked
 * @n: the integer to be checked
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

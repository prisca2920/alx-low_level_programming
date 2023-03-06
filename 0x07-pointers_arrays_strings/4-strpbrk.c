#include "main.h"

/**
 * _strpbrk - searches a string for bytes
 * @s: first character to be checked
 * @accept: string to be checked
 * Return: a pointer to the byte or null
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}
	return ('\0');
}

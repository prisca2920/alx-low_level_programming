#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first character to be checked
 * @src: second character to be checked
 * @n: third character to be checked
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

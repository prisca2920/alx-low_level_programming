#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @dest: first character to be checked
 * @src: second character to be checked
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}

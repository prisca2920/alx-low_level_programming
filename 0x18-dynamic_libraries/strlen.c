#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: the character to be checked
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}

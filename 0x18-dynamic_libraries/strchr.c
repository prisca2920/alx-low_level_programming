#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: first character to be checked
 * @c: second character to be checked
 * Return: a pointer of char c or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}

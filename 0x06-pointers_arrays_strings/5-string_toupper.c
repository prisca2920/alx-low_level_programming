#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @top: character to be checked
 * Return: a character
 */

char *string_toupper(char *top)
{
	int i;

	for (i = 0; top[i] != '\0'; i++)
	{
		if (top[i] >= 97 && top[i] <= 122)
		{
		top[i] = top[i] - 32;
		}
	}
	return (top);
}

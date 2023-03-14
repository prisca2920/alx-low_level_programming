#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first character
 * @s2: second character
 * Return: null or a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, len = 0, len2 = 0;
	char *s_cat;

	if (s1 == NULL)
	s1 = " ";

	if (s2 == NULL)
	s2 = " ";

	for (i = 0; s1[i] || s2[i]; i++)
		len2++;

	s_cat = malloc(sizeof(char) * len2);

	if (s_cat == NULL)
	return (NULL);

	for (i = 0; s1[i]; i++)
	s_cat[len++] = s1[i];

	for (i = 0; s2[i]; i++)
	s_cat[len++] = s2[i];

	return (s_cat);
}

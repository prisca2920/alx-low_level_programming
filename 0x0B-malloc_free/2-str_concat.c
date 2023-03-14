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
	int i, j, len1, len2;
	char *s_cat;

	if (s1 == NULL)
	s1 = " ";

	if (s2 == NULL)
	s2 = " ";

	len1 = 0;

	while (len1 != '\0')
		len1++;

	len2 = 0;

	while (len2 != '\0')
		len2++;

	s_cat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s_cat == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	s_cat[i] = s1[i];

	for (j = 0; j < len2; j++)
	s_cat[i + j] = s2[j];

	return (s_cat);
}

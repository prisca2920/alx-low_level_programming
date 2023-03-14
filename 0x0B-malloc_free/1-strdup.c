#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: character to be checked
 * Return: 0 or a pointer
 */

char *_strdup(char *str)
{
	char *str_twin;
	int i, j;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	str_twin = malloc(sizeof(char) * (j + 1));

	if (str_twin == NULL)

	return (NULL);


	for (i = 0; str[i]; i++)
	{
		str_twin[i] = str[i];
	}
	str_twin[j] = '\0';

	return (str_twin);
}


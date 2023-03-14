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
	unsigned int i, j;

	if (str == NULL)
	return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	str_twin = malloc(sizeof(char) * (i + 1));

	if (str_twin == NULL)

	return (NULL);


	for (j = 0; j <= i; j++)

	str_twin[i] = str[i];

	return (str_twin);
}


#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character to be checked
 * Return: 0 success
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;

	char stemp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		stemp = s[i];
		s[i] = s[aux];
		s[aux] = stemp;
		aux++;
		i--;
	}
}

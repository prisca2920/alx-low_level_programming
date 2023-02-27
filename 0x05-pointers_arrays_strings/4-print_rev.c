#include "main.h"

/**
 * print_rev - reverses a string
 * @s: character to be checked
 * Return: 0 success
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

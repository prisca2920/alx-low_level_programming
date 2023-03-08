#include "main.h"

/**
 * is_palindrome - prints a palindrome
 * @s: character to be checked
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
	return (1);

	else
	{
	return (0);
	is_palindrome(s + 1);
	}
}

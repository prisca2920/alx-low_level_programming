#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: character to be checked
 * Return: 0 success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

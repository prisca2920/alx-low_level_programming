#include "main.h"

/**
 * print_line - draws a straight line
 * @n: character to be checked
 * Return: prints a line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i <= n; i++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}

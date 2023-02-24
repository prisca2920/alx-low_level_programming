#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: character to be checked
 * Return: the diagonal line
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
	for (x = 0; x <= n; x++)
	{
	for (y = 0; y <= x; y++)
	{
	_putchar(' ');
	}
	_putchar('\\');

	if (x == n - 1)
	{
	continue;
	}
	_putchar('\n');
	}
	}
	_putchar('\n');
}

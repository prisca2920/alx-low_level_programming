#include "main.h"

/**
 * print_times_table - prints out the times table
 * @n: charachter to multiply
 *
 * Return: 0 success
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	return;
	}

	int i, j;

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	_putchar("%d", i * j);
	}

	_putchar("\n");
	}
}

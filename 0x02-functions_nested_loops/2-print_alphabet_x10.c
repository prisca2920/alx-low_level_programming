#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10 times
 * Return: on success 1
 * on error -1
 */

void print_alphabet_x10(void)
{
	char c, d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}

		_putchar('\n');
	}
}

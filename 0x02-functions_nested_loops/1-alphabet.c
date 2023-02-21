#include "main.h"

/**
 * print_alphabet - prints alphabets a-z
 *
 * Return: On success 1.
 * on error -1 is returned
 */

void print_alphabet(void)
{
	char c = 'a';
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
}

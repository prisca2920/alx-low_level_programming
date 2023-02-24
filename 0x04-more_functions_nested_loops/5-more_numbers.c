#include "main.h"

/**
 * more_numbers - prints 10 times 0-14
 *
 * Return: 0 success
 */

void more_numbers(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
		if (c >= 10)
		_putchar('1');
		_putchar(c % 10 + '0');
		}

	_putchar('\n');
	}
}

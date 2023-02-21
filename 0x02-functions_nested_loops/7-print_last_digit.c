#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *@n - The parameter to be computed
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

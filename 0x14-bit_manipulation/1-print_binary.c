#include "main.h"

/**
 * print_binary - prints the binary of a num
 * @n: character to be checked
 * Return: NULL, or the binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

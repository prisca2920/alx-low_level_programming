#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}


	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}

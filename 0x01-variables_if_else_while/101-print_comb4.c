#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c, i, d;

	for (c = 0; c <= 7; c++)
	{
		for (i = c + 1; i <= 8; i++)
		{
			for (d = i + 1; d <= 9; d++)
			{
				putchar(c + '0');
				putchar(i + '0');
				putchar(d + '0');

				if
					(c < 8 || i < 7 || d < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

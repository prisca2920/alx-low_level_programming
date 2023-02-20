#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c, i, d, count = 0;

	for (c = 0; c <= 7; c++)
	{
		for (i = c + 1; i <= 8; i++)
		{
			for (d = i + 1; d <= 9; d++)
			{
				if (count > 0)
				{
					putchar(',');
					putchar(' ');
				}

				putchar(c + '0');
				putchar(i + '0');
				putchar(d + '0');
				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}

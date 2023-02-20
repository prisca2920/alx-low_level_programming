#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, flag = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i != j)
			{
				if (flag == 1)
				{
					putchar(',');
					putchar(' ');
				}

				else
				{
					flag = 1;
				}

				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}

		}
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 * description - prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char C = 'a';

	while
		(C <= 'z')
		{
			if (C != 'e' && C != 'q')
			{
				putchar(C);
			}
			C++;
		}
	putchar('\n');
	return (0);
}


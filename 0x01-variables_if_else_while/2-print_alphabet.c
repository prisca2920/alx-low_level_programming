#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * description - prints alphabets in lowercase
 * Return: 0(success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
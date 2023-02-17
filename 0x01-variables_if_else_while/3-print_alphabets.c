#include <stdio.h>
#include <stdlib.h>

/**
 * main- main block
 * description - writes alphabets upper and lowercase
 * Return: 0(success)
 */

int main(void)
{
	char c = 'a';

	while
		(c <= 'z');
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while
		(c <= 'Z');
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

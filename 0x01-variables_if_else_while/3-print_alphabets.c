#include <stdio.h>

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

	char d = 'A';

	while
		(d <= 'Z');
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}

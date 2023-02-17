#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry point
 * description - base 10 single digits
 * Return: 0
 */

int main(void)
{
	char c = '0';

	while
		(c <= '9')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

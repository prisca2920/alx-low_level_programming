#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 *
 * Return: 0(success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("last digit of %i is %i and is 0\n", n);
	}
	else if (n < 6)
	{
		printf("last digit of %i is %i and is less than 6 and not 0\n", n);
	}
	return (0);
}

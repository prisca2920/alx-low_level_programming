#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("last digit of %d is ", n);

	int last = n % 10;

	if (last > 5)
	{
		printf("%d and is greater than 5\n", last);
	}

	else if (last == 0)
	{
		printf("%d and is 0\n", last);
	}

	else
	{
		printf("%d and is less than 6 and not 0\n", last);
	}

	return (0);
}


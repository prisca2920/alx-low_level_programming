#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int fib_prev = 1, fib_curr = 2, fib_next, i;

	printf("%d, %d ", fib_prev, fib_curr);

	for (i = 3; i <= 98; i++)
	{
		fib_next = fib_prev + fib_curr;
		printf("%d", fib_next);

		if (i < 98)
		{
		printf(" ");
		}

	fib_prev = fib_curr;
	fib_curr = fib_next;
	}

	printf("\n");

	return (0);
}

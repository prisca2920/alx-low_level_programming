#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int fib_prev = 1, fib_curr = 2, fib_next;

	int fib_sum = 0;

	while (fib_curr <= 4000000)
	{
		if (fib_curr % 2 == 0)
		{
		fib_sum += fib_curr;
		}
	fib_next = fib_prev + fib_curr;
	fib_prev = fib_curr;
	fib_curr = fib_next;
	}

	printf("%d\n", fib_sum);

	return (0);
}

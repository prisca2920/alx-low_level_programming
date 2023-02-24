#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i <= num; i++)
	{
	while (num % i == 0 && num != i)
	{
	num = num / i;
	}
	}
	printf("%ld\n", num);

	return (0);
}

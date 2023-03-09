#include "main.h"
/**
 * helperFunction - returns 0 or 1
 * @num: character to be checked
 * @i: second character
 * Return: 0 or 1
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
	if (num % i == 0)
	{
	return (0);
	}
	else
	{
	return (helperFunction(num, i + 1));
	}
	}
	else
	{
	return (1);
	}
}

/**
 * is_prime_number - prints a prime number
 * @n: character to be checked
 * Return: 0 success or -1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}

	else
	{
	return (helperFunction(n, 2));
	}
}

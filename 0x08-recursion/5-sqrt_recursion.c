#include "main.h"

/**
 * helperFunction - checkes if square root number exist
 * @num: character to be checked
 * @pSqrt: the possible squareroot
 * Return: sqrt or -1
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}

	else
	{
	if ((pSqrt * pSqrt) > num)
	return (-1);
	else
	return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: character to be checked
 * Return: he square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	else
	return (helperFunction(n, 0));
}

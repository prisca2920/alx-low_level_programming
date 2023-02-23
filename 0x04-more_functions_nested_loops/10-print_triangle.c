#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: the parameter to be checked
 * Return: 0 success
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	
	else if (size >= 0)
	{
	_putchar('#');
	}
}	

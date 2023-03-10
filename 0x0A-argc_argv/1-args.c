#include <stdio.h>

/**
 * main - entry point
 * @argc: - integer to be checked
 * @argv: - string to be checked
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void) argv;

	return (0);
}

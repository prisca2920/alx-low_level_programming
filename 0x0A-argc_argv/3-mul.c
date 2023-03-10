#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - entry point
 * @argc: integer to be checked
 * @argv: character to be checked
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}

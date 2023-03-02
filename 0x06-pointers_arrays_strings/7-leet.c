#include "main.h"

/**
 * leet - encodes a string
 * @top: character to be checked
 * Return: the encoded string
 */

char *leet(char *top)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; top[i] != '\0'; i++)
	{
	for (j = 0; j <= 10; j++)
	{
	if (top[i] == a[j])
	{
	top[i] = b[j];
	}
	}
	}
	return (top);
}

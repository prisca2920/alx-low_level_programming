#include "main.h"

/**
 * rot13 - encodes a string
 * @c: character to be checked
 * Return: the encoded string
 */

char *rot13(char *c)
{
	int i, j;
	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
	for (j = 0; j <= 52; j++)
	{
	if (c[i] == s[j])
	{
	c[i] = b[j];
	break;
	}
	}
	}
	return (c);
}

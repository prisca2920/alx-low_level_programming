#include "main.h"

/**
 * cap_string - capitalizes each word
 * @top: character to be checked
 * Return: capitalized words
 */

char *cap_string(char *top)
{
	int i;

	for (i = 0; top[i] != '\0'; i++)
	{
		if (top[i] >= 97 && top[i] <= 122)
		{
		if (top[i - 1] == ' ' ||
		top[i - 1] == '\t' ||
		top[i - 1] == '\n' ||
		top[i - 1] == ',' ||
		top[i - 1] == ';' ||
		top[i - 1] == '.' ||
		top[i - 1] == '!' ||
		top[i - 1] == '?' ||
		top[i - 1] == '"' ||
		top[i - 1] == '(' ||
		top[i - 1] == ')' ||
		top[i - 1] == '{' ||
		top[i - 1] == '}' ||
		top == 0)
			top[i] = top[i] - 32;
		}
	}
	return (top);
}

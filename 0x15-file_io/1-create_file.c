#include "main.h"

/**
 * create_file - creates a file
 * @filename: first char
 * @text_content: second char
 * Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int the_text = 0, i, fp;

	if (filename == NULL)
	{
	return (-1);
	}

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
	{
	return (-1);
	}

	if (text_content != NULL)
	{
	for (i = 0; text_content[i] != '\0'; i++)
	;
	the_text = write(fp, text_content, i);
	}

	close(fp);

	if (the_text == -1)
	{
	return (-1);
	}

	return (1);
}

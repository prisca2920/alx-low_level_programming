#include "main.h"

/**
 * append_text_to_file - changes text at the end
 * @filename: first char
 * @text_content: second char
 * Return: 1 success, -1 error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int the_text = 0, fp, i;

	if (filename == NULL)
	{
	return (-1);
	}

	fp = open(filename, O_WRONLY | O_APPEND);

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

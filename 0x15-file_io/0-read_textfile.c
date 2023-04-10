#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: first char
 * @letters: second char
 * Return: 0 or the letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, read_me, write_me;
	char *words;

	if (filename == NULL)
		return (0);

	words = malloc(sizeof(char) * letters);
	if (words ==  NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	read_me = read(fp, words, letters);
	write_me = write(STDOUT_FILENO, words, read_me);

	if (fp == -1 || read_me == -1 || write_me == -1 || write_me != read_me)
	{
		free(words);
		return (0);
	}

	free(words);
	close(fp);

	return (write_me);

}

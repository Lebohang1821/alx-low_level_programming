#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - it Reads text file print to STDOUT.
 * @filename: text file being read
 * @letters: the number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t st;
	ssize_t w;
	ssize_t o;

	st = open(filename, O_RDONLY);
	if (st == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	o = read(st, buf, letters);
	w = write(STDOUT_FILENO, buf, o);

	free(buf);
	close(st);
	return (w);
}

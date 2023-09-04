#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - calculate
 * @filename: ...
 * @letters: is an int
 * Return: value of base and power
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t	rd;
	ssize_t wr;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, b, letters);
	wr = write(STDOUT_FILENO, b, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(b);
		return (0);
	}

	free(b);
	close(op);

	return (wr);
}

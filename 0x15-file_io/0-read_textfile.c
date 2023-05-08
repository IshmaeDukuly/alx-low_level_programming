#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - The function
 * @filename: This is the pointer
 * @letters: The number pter
 * Return: Always return success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, y, x;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	y = read(a, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);

	if (a == -1 || y == -1 || x == -1 || x != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(a);

	return (x);
}

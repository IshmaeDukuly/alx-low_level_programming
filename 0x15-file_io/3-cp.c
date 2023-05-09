#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This allocate the
 * @file: the file
 * Return: Always succcesss
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file - this closes the file.
 * @fd: This is the descritor
 */

void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - The main
 * @argc:  arguments counts.
 * @argv: Points to arguments vector.
 * Description: this the function
 * Return: Always success
 */


int main(int argc, char *argv[])
{
	int here, dot, x, y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	here = open(argv[1], O_RDONLY);
	x = read(here, buffer, 1024);
	dot = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (here == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		y = write(dot, buffer, x);
		if (dot == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		x = read(here, buffer, 1024);
		dot = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffer);
	close_file(here);
	close_file(dot);

	return (0);
}

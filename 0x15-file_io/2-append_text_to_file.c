#include "main.h"

/**
 * append_text_to_file - Appends text. The
 * function
 * @filename: A pointer
 * @text_content: the text content
 * Return: Always success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght= 0; text_content[lenght];)
			lenght++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, lenght);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}

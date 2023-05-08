#include "main.h"


/**
 * create_file - Creates a text file.
 * @filename: file to create
 * @text_content: The pointer to thetring
 * Return: returnuccess
 */


int create_file(const char *filename, char *text_content)
{
	int a, x, len = 0;


	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(a, text_content, len);

	if (a == -1 || x == -1)
		return (-1);

	close(a);

	return (1);
}

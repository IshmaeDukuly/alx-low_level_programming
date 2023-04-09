#include <stdio.h>

/**
 * main - starting point
 * Descrpition: prints all command arguements
 * @argc: An arguement count
 * @argv: An arguement vector
 * Return: Always 0 Success
 */


int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);

}

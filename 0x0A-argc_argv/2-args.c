#include "main.h"
#include <stdio.h>


/**
 * main - All arguments should be printed
 * @argc: This is th argument count
 * @argv: argument vector
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{

		printf("%s\n", argv[y])

		return (0);
	}
}

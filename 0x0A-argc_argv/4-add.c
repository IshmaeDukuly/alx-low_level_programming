#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

/**
 * main - Addition of two numbers
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Alwys Success
 */

int main(int argc, char *argv[])
{
	int n1, n2, add = 0;

	for (n1 = 1; n1 < argc; n1++)

		for (n2 = 0; argv[n1][n2] != '\0'; n2++)

			if (!isdigit(argv[n1][n2]))

				printf("Error\n");
				return (1);


		add += atoi(argv[n1]);

	printf("%d\n", add);
	return (0);
}


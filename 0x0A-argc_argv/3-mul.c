#include <stdio.h>
#include <stdlib.h>


/**
 * main - starting point _multiplication of two numbers
 * @argc: An argument count
 * @argv: An arguement vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num_1;
	int num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	output = num_1 * num_2;
	printf("%d\n", output);
	return (0);
}

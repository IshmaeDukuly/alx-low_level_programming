#include "main.h"
#include <stdio.h>

/**
 * main - Mutiply two integers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always Success
 */

int main(int argc, char argv[])
{
	{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

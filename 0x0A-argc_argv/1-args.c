#include "stdio.h"

/**
 * main - prints the number of arguments
 * @argc: An arguement count
 * @argv: An arguement vector
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[]_attribute_((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - prints name, to be accompanied by a new line
 * _attribute  - this is an unused variable
 * @argc: this is number of command line
 * @argv: this is the arguements vector
 * Return: Always 0 (Success)
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>


/**
 * main - addition of two numbers
 * @argc: argument count
 * @argv: stands for an arguement vector
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	int sum;
	int digit;
	int arg_index;
	int charNumber;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (arg_index = 1; arg_index < argc; arg_index++)
	{
		for (charNumber = 0; argv[arg_index][charNumber] != '\0'; charNumber++)
		{
			if (!isdigit(argv[arg_index][charNumber]))
			{
				printf("Error\n");
				return (1);
			}
		}
		digit = atoi(argv[arg_index]);
		if (digit < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += digit;
	}
	printf("%d\n", sum);
	return (0);
}


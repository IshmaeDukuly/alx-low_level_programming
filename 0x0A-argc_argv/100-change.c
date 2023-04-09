#include <stdio.h>
#include <stdlib.h>

/**
 * main - output the minimum number of coins
 * @argc: An arguement counts
 * @argv: An arguement vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int num_coins;
	int n;
	int coin_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (n = 0; n < 5; n++)
	{
		coin_count = cents / coins[n];
		num_coins += coin_count;
		cents -= coin_count * coins[n];
	}
	printf("%d\n", num_coins);
	return (0);
}


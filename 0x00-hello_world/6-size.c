#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("Size of a char: %d byte(s)\n", sizeof(char));
	puts("Size of an int: %d byte(s)\n", sizeof(int));
	puts("Sizeof of a long int: %d byte(s)\n", sizeof(long int));
	puts("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	puts("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}

#include <stdio.h>

/**
 * main  - prints the alphabet in uppercase,
 * Start with the new line
 * * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

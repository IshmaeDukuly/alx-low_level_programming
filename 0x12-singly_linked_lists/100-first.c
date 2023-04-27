#include <stdio.h>

/**
 * premain - The function runs before the
 * main
 * Return: Always return 0 (success)
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

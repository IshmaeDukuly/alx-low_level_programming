#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * main - this generate key base on username
 * @argc: the arguments passed
 * @argv: arguments passed
 * Return: Always return 0 success
 */
int main(int argc, char *argv[])
{
	unsigned int y, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "  ";

	if (argc != 2)
	{
		printf("correct use: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (y = 0, add = 0; y < len; y++)
		add += argv[1][y];
	p[1] = l[(add ^ 79) & 63];
	for (y = 0, b = 1; y < len; y++)
		b *= argv[1][y];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], y = 0; y < len; y++)
		if ((char)b <= argv[1][y])
			b = argv[1][y];

	srand(b  ^ 14);
	p[3] = l[rand() & 63];
	for (b  = 0, y = 0; y < len; y++)
		b += argv[1][y] * argv[1][y];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, y = 0; (char)y < argv[1][0]; y++)
		b = rand();
	p[5] = l[(b ^ 239) & 63];
	printf("%s\n", p);
	return (0);
}


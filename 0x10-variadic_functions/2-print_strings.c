#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - prints the strings that should be followed by a new line.
  *@separator: string printed between strings.
  *@n:The n indicates the number of strings.
  *
  *Return: Return void.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}

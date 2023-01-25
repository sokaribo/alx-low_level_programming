#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int;
	char *s;
	va_list strings;

	va_start(strings, n);
	if (separator == NULL)
		separator = "";
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

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguements
 * Return: nothing, prints number if separator is not NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printed;
	unsigned int r;

	va_start(printed, n);

	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(printed, int));

		if (r != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(printed);
	printf("\n");
}

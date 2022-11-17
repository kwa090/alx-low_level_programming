#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of arguements
 * Return: sum of all parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all_sum;
	int sum = 0;
	unsigned int j;

	if (n == 0)
		return (0);

	va_start(valist, n);
	
	for (j = 0; j < n; j++)
		sum = sum + va_arg(valist, int);

	va_end(valist);

	return (sum);
}

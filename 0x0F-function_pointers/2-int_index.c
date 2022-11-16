#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 * if it matches
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array && cmp)
	{
		for (y = 0; y < size; y++)
		{
			if (cmp(array[y]) != 0)
				return (y);
		}
	}

	return (-1);
}

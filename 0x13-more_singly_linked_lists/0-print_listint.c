#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: The head of the linked list
 *
 * Return: The number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;

		size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}

	return (count);
}

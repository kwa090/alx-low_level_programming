#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: The head of the linked list
 *
 * Return: The number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_C;
	const listint_t *next_ptr;

	next_ptr = h;
	node_C = 0;

	while (next_ptr != NULL)
	{
		printf("%i\n", next_ptr->n);
		node_C += 1;
		next_ptr = next_ptr->next;
	}

	return (node_C);
}

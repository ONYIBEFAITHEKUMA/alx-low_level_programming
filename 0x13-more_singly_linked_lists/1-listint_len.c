#include "lists.h"

/**
 * listint_len - Returns the number of elememts in a linked list
 * @h: input value
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t sim = 0;

	while (h)
	{
		sim++;
		h = h->next;
	}

	return (sim);
}

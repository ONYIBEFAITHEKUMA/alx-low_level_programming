#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: input value
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t sim = 0;

	while (h)
	{
		printf("%d\n", h->n);
		sim++;
		h = h->next;
	}

	return (sim);
}

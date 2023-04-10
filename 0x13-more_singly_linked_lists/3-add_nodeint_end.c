#include "lists.h"

/**
 * *add_nodeint_end - adds a newnode to the end of a linked list
 * @head: input value
 * @n: input value
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lake;
	listint *bake = *head;

	lake = malloc(sizeof(listint_t));
	if (!lake)
		return (NULL);
	lake->n = n;
	lake->next = NULL;

	if (*head == NULL)
	{
		*head = lake;
		return (lake);
	}

	while (bake->next)
		bake = bake->next;

	bake->next = lake;
	return (lake);
}

#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a linked list
 * @head: input value
 * @n: input value
 *
 * Return: address of new element otherwise, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lake;

	lake = malloc(sizeof(listint_t));
	if (!lake)
		return (NULL);
	lake->n = n;
	lake->next = *head;
	*head = lake;

	return (lake);
}

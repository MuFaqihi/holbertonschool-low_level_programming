#include "lists.h"
/**
 * add_dnodeint_end - A function that adds a
 *	new node at the end of a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @n: Value used to initialize the new node.
 * Return: Pointer to the new node, or NULL if memory allocation fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	for (end = *head; end->next != NULL; end = end->next)
		;
	new->prev = end;
	end->next = new;
	return (new);
}

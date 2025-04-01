#include "lists.h"
/**
 * insert_dnodeint_at_index - A function that inserts a new
 *	 node into a doubly linked list at a specific index.
 * @h: Double pointer to the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value used to initialize the new node.
 * Return: Pointer to the new node, or NULL if creation failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur = *h;
	unsigned int cur_idx;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (cur_idx = 0; cur != NULL; cur_idx++)
	{
		if (cur_idx == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = cur->next;
			new->prev = cur;
			if (cur->next != NULL)
				cur->next->prev = new;
			cur->next = new;
			return (new);
		}
		cur = cur->next;
	}
	return (NULL);
}

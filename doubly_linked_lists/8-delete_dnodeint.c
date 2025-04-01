#include "lists.h"
/**
 * delete_dnodeint_at_index - A function that deletes a node
 *	 in a doubly linked list at a specific index.
 * @head: Double pointer to the head of the list.
 * @index: Index at which the node should be deleted.
 * Return: 1 if the operation succeeds, or -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int cur_idx;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;
	if (index == 0)
	{
		if (cur->next != NULL)
			cur->next->prev = NULL;
		*head = cur->next;
		free(cur);
		return (1);
	}
	for (cur_idx = 0; cur != NULL; cur_idx++)
	{
		if (cur_idx == index)
		{
			cur->prev->next = cur->next;
			if (cur->next != NULL)
				cur->next->prev = cur->prev;
			free(cur);
			return (1);
		}
		cur = cur->next;
	}
	return (-1);
}

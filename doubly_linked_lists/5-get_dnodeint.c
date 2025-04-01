#include "lists.h"
/**
 * get_dnodeint_at_index - A function that retrieves a node
 *	 from a doubly linked list at a specific index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to access.
 * Return: Pointer to the node at the specified index
 *	, or NULL if the node does not exist.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

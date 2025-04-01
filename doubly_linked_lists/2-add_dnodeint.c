#include "lists.h"
/**
 * add_dnodeint - A function that adds a new node at
 *	the beginning of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be assigned to the new node.
 * Return: Address of the new element, or NULL if the function fails.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(NULL);
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	if (*head != NULL)
	{
		newnode->next = *head;
		(*head)->prev = newnode;
	}
	if (*head == NULL)
		newnode->next = NULL;
	*head = newnode;
	return (*head);
}

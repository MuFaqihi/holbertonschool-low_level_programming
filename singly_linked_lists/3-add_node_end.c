#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Function to add a new node at the end of a list_t list.
 * @head: Pointer to the head of the list (input).
 * @str: String data to be stored in the new node (input).
 * Return: Pointer to the newly created node, or NULL if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i, n = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		n++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}

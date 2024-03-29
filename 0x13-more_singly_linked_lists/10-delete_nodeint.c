#include <stdlib.h>
#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index of a linked list
*@head: pointer to a pointer to the first node of the list
*@index: index of the node to delete, starting at 0
* Return: 1 if succeeded, -1 if fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}

	prev = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
	prev = current;
	current = current->next;
	}

	if (current == NULL)
	return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}

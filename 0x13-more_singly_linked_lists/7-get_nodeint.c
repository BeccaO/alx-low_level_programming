#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: pointer to the head node of the list
*@index: index of the node to be returned
*Return: pointer to the nth node of the list
*         NULL if the node at the index does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	unsigned int j;

	current = head;
	j = 0;

	while (current != NULL)
	{
		if (j == index)
			return (current);

		current = current->next;
		j++;
	}

	return (NULL);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: pointer to pointer to head node of linked list
*@idx: index to insert new node
*@n: value to put in new node
*Return: address of new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i = 0;

	if (idx == 0)
	{
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	while (i < idx - 1 && temp != NULL)
	{
	temp = temp->next;
	i++;
	}
	if (temp == NULL)
	return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

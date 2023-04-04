#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint - function that adds a new node at the beginning of a list
*@head: Head of node
*@n: Data of node
*
*Return: New node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	printf("NULL");

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}

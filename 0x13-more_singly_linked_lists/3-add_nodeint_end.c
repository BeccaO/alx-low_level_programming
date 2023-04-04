#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint_end - function that adds a new node at the end of a list
*@head: Head of node
*@n: data of newnode
*Return: newnode
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
	*head = newnode;
	}
	else
	{
	listint_t *tmp = *head;

	while (tmp->next != NULL)
	{
	tmp = tmp->next;
	}
	tmp->next = newnode;
	}
	return (newnode);
}

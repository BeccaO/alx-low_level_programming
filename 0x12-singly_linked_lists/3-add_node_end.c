#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node to the end of linked list
* @head: double pointer to a linked list
* @str: string to add to the new node
*
* Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}
	tmp = *head;
	while (tmp->next)
	{
	tmp = tmp->next;
	}
	tmp->next = newnode;
	return (newnode);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* add_node - add a new node at beginning of a list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	return (NULL);
	newnode->str = strdup(str);

	newnode->len = strlen(str);

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

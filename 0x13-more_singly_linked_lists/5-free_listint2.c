#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*free_listint2 - function that frees a list and sets the heas to NULL
*@head: Head of the node
*Return: nothing
*/


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}

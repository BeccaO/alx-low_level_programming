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
	listint_t *temp = *head;
	listint_t *next;

	while (temp != NULL)
	{
	next = temp->next;
	free(temp);
	temp = next;
	*head = NULL;
	}
}

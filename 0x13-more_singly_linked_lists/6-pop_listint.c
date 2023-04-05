#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
*pop_listint - function that deletes the head node of a list
*@head: Head of node
*Return: n
*/

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
	{
	return (0);
	}
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (n);
}

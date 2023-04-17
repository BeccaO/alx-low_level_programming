#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*sum_listint - function that returns the sum of all data of a list
*@head: head of the node
*Return: Sum of all the list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}

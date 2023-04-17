#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @h: head of the list
*
* Return: pointer to the reversed
*/
listint_t *reverse_listint(listint_t **h)
{
	listint_t *temp2, *temp1;

	if (!h || !(*h))
	return (NULL);
	temp1 = (*h)->next;
	(*h)->next = NULL;
	while (temp1)
	{
	temp2 = *h;
	*h = temp1;
	temp1 = (*h)->next;
	(*h)->next = temp2;
	}
	return (*h);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
*print_listint - function that prints all the elements of a list
*@h: Head of nodes
*
*Return: count
*/

size_t print_listint(const listint_t *h)
{	
	int count = 0;

	while (h)
	{
	printf("%d\n ", h->n);
	count++;
	h = h->next;
	}
	return (count);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
*listint_len - function that returns the number of elements in a linked list
*@h: Head
*
*Return: number of element
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}

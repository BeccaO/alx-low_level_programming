#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"




void free_listint(listint_t *head)
{
	listint_t *tmp = head;
	listint_t *next;
	
	while (tmp != NULL)
	{
	next = tmp->next;
	free(tmp);
	tmp = next;
	}
}

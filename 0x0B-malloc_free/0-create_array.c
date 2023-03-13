#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
**create_array - creates an array of chars
*@size: size of the array
*@c: Character to assign
*Return: NULL
*/

char *create_array(unsigned int size, char c)
{
	char *cha;
	unsigned int j = 0;

	cha = malloc(sizeof(char) * size);
	if (size == 0 || cha == NULL)
	return (NULL);

	for (j = 0; j < size; j++)
	cha[j] = c;
	return (cha);
}

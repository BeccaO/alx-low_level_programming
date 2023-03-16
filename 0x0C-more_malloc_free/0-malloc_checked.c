#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - Function that allocates memory using malloc
*@b: size of memory to be allocated
*Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *best;

	best = malloc(b);

	if (best == NULL)
		exit(98);

	return (best);
}

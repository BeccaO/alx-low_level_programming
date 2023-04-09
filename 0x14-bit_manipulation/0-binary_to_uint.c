#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*binary_to_uint - function that converts a binary number to an unsigned int
*@b: pointer to a string
*Return:  the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
	return (0);

	while (*b)
	{
	if (*b != '0' && *b != '1')
	return (0);

	num <<= 1;
	if (*b++ == '1')
	num += 1;
	}

	return (num);
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*flip_bits -  function that returns the number of bits
*@n: bits given
*@m: Flipped bit
*Return: Number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xorResult = n ^ m;

	while (xorResult > 0)
	{
	if (xorResult & 1)
	count++;

	xorResult >>= 1;
	}

	return (count);
}

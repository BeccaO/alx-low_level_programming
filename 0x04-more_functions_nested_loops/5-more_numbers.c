#include "main.h"

/**
*more_numbers - 10 times the numbers, from 0 to 14
*_putchar: Function used
*/

void more_numbers(void)
{
	int k, j;

	for (k = 0; k < 10; k++)
	{
	for (j = 0; j < 15; j++)
	{
	if (j >= 10)
	_putchar(j / 10 + '0');
	_putchar(j % 10 + '0');
	}
	_putchar('\n');
	}
}

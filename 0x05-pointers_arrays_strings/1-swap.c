#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: Variable
*@b: Variable
*/

void swap_int(int *a, int *b)
{
	int o = *a;

	*a = *b;
	*b = o;
}

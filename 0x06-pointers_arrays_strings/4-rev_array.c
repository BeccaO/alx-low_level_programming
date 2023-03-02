#include "main.h"
#include <string.h>

/**
*reverse_array - reverses the content of an array of integers
*@a: an array of integers
*@n: the number of elements to swap
*
*Return: Content
*/

void reverse_array(int *a, int n)
{
	int i, j;
	
	for (i = 0; i < n / 2; i++)
{
	j = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = j;
}
}

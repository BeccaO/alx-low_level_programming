#include "main.h"
#include <stdio.h>

/**
*print_triangle - prints a tri, followed by a new line
*@size: size of the triangle
*/

void print_triangle(int size)
{
if (size <= 0)

{
	_putchar('\n');
}
	else
{
	int k, l;

	for (k = 1; k < size; k++)
{
	for (l = 1; l < size; l++)
{
	_putchar(' ');
}
	for (l = 1; l <= k; l++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*sum_them_all -  function that returns the sum of all its parameters
*@n: variable numbers of arguement
*@...: elipsis
*Return: 0 Always
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int i, sum = 0;

	if (n == 0)
	return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);


	va_end(list);

	return (sum);
}


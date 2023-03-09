#include "main.h"


/**
*is_prime_number - Prints prime numbers recursively
*@n: variable
*Return: Always 0
*/

int is_prime_number(int n)
{
	int i = 0;

	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	else
	is_prime_number(n, i - 1);
	return (n);
}

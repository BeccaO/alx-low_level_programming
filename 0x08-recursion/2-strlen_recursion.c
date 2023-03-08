#include "main.h"

/**
*_strlen_recursion -Function that returns the length of a string
* @s: pointer variable
*Return: count
*/

int _strlen_recursion(char *s)
{
	int i = 0, count = 0;

	if (s[i] != '\0')
	{
	count++;
	return (count + _strlen_recursion(s + 1));
	}
	return (count);
}

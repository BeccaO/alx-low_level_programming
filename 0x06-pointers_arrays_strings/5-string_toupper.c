#include "main.h"

/**
*string_toupper - Function that changes all lowercase letters
*of a string to uppercase.
*@ptr: name of string
*Return: nothing
*/

char *string_toupper(char *ptr)
{

	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	if (ptr[i] >= 97 && ptr[i] <= 122)
{
	ptr[i] = ptr[i] - 32;
}
	return (ptr);
}

#include "main.h"
#include <string.h>

/**
*_strncat - a function that concatenates two strings
*@dest: String1
*@src: String2
*@n: Index number
*Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

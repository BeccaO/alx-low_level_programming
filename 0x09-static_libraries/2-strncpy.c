#include "main.h"
#include <string.h>

/**
*_strncpy - Function that copies string src to dest
*@dest: String 1
*@src: String 2
*@n: Number of index
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

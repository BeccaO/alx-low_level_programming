#include "main.h"
#include <string.h>

/**
*_strncpy - a function that copies a string
*@dest: String 1
*@src: String 2
*@n: Number of index 
*Return Always 0 (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

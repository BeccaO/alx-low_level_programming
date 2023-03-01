#include "main.h"
#include <string.h>

/**
**_strcat - function that joins src string to the dest string
*@dest: String 1
*@src: String 2
*Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

#include "main.h"
#include <string.h>

/**
*char *_strcat - Function that concatenates two strings.
*@dest: String 1
*@src: String 2
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

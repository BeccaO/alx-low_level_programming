#include "main.h"
#include <string.h>

/**
*_puts - prints a string to stdout
*@str: chearacter to be checked
*Return Always 0 (success)
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

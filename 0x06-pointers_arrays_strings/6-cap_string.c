#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @b: int to check
 *
 * Return: 0 is success
 */
char *cap_string(char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
{
	if (i == 0)
	{
	if (b[i] >= 97 && b[i] <= 122)
{
	b[i] = b[i] - 32;
}
	}
	if (b[i] == ' ' || b[i] == '\n' || b[i] == ','
		|| b[i] == '\t' || b[i] == ';' || b[i] == '.'
		|| b[i] == '!' || b[i] == '?'
		|| b[i] == '"' || b[i] == '(' || b[i] == ')'
		|| b[i] == '{' || b[i] == '}')
		{
		if (b[i + 1] >= 97 && b[i + 1] <= 122)
		{
			b[i + 1] = b[i + 1] - 32;
		}
		}
}
	return (b);
}

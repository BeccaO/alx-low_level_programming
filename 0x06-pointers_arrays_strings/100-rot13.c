#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13..
 * @a: is a pointer type char
 * Return: Always 0.
 *
 */
	char *rot13(char *a)
{
	char leet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chan[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
{

	for (j = 0; leet[j] != '\0'; j++)
{
	if (a[i] == leet[j])
{
	a[i] = chan[j];
	break;
}

}

}
	return (a);
}

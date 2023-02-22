#include <stdio.h>
#include "main.h"
/**
*_islower -  checks for lower case letters
*
*_isalpha - checks for alphabetic character
*
*@c: the input
*
*Return: 1 if c is a letter, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{
	return (0);
}
}

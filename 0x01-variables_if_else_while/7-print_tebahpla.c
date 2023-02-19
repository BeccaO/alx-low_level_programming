#include <stdio.h>
/**
*main - Entry Point
*Description: a program that prints the lowercase alphabet
*in reverse followed by a new line
*
*Return: Always 0 (success)
*/
int main(void)
{
	char j;

	for (j = 'z'; j >= 'a'; j--)
{
	putchar (j);
}
	putchar('\n');

	return (0);
}

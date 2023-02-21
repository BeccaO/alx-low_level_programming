#include <stdio.h>
#include "main.h"
/**
*print_alphabet - prints the alphabet, in lowercase
*Description: prototype
*Return: Always (void)
*/
void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
{
	putchar(b);
}
	putchar('\n');
}

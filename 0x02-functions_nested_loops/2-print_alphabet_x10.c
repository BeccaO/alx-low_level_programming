#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - Prototype.
*Description: print 10 times the alphabet in lowercase
*a-z 10 times
*Return: Always 0
*/
void print_alphabet_x10(void)
{
	char abc;
	int i;

	i = 0;

	while (i < 10)
{
	abc = 'a';

	while (abc <= 'z')
{
	putchar(abc);
	abc++;
}
	putchar('\n');
	i++;
}
}

#include <stdio.h>
#include "main.h"
/**
*print_alphabet - a function to print alphabets
*Description:a function that prints the alphabet
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
{
	putchar(b);
}
	putchar('\n');
}

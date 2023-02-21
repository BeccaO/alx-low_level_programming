#include <stdio.h>
#include "main.h"
/**
*main - check the code
*Description:a function that prints the alphabet
*Return: Always 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
{
	putchar(b);
}
	putchar('\n');

	return (0);
}

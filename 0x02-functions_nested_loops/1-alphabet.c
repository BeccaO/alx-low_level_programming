#include <stdio.h>
#include "main.h"
/**
*main - check the code
*Description:a function that prints the alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet();
	int b;

	for (b = 'a'; b <= 'z'; b++)
{
	putchar(b);
}
	putchar('\n');

	return (0);
}

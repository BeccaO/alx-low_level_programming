#include <stdio.h>
#include "main.h"
/**
*main - check the code
*
*Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void);
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
{
	putchar(b);
}
	putchar('\n');

}

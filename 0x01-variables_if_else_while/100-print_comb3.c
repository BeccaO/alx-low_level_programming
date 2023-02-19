#include <stdio.h>
/**
*main - Entry point
*Description: program that prints all possible different
*combinations of two digits
*
*Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = '01'; i <= '99'; i++)
{
	putchar(i);

	if (i != '99')
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}

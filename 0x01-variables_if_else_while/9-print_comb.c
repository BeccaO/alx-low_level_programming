#include <stdio.h>
/**
*main - Entry point
*Description: program that prints all possible
*combinations of single-digit numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
{
	putchar(j);
	if (j != '9')
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}

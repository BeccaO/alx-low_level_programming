#include <stdio.h>
/**
*main - Entry point
*Description: Program that prints all the numbers of base 16
*in lowercase followed by a new line
*
*Return: Always 0 (success)
*/
int main(void)
{
	char ch, ab;

	for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
	for (ab = 'a'; ab <= 'f'; ab++)
{
	putchar(ab);
}
	putchar('\n');
	return (0);
}

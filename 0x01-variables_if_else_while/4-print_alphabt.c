#include <stdio.h>

/**
*main - Entry point
*Description: Prints the alphabet in lowercase, followed by a new line
*Print all the letters except q and e
*Return: Always 0 (success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}

}
	putchar('\n');
	return (0);
}

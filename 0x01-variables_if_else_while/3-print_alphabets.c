#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: program that prints the alphabet in lowercase,
 *and then upper case, followed by a new line.
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z';
	 ch++);
{
	putchar(ch);
}
	char de = 'A';

	for (de = 'A'; de <= 'Z';
	 de++);
{
	putchar(de);
}
	putchar('\n');

	return (0);
}
